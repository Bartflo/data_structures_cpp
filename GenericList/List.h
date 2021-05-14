#ifndef List_H
#define List_H

#include <iostream>
#include <stdexcept>

using namespace std;

template<typename T> //requires any type T with operator== and operator<< supported
struct List
{

private:

    struct Node
    {
        T value;
        Node* next;
        Node(T v, Node* n = nullptr)
        {
            value = v;
            next = n;
        }
    };

    Node* head = nullptr;
    Node* tail = nullptr;
    int counter = 0;

    //invariants:
    //if nonempty, head points to the first node (it contains the first value)
    //if nonempty, tail points to the last node (it contains the last value)
    //tail is null if and only if head is null (empty list)
    //the next for the first node points to the second node, etc.
    //the next for the last node is null
    //counter is at least 0 (empty list) and it is the number of nodes (size of the list)

public:

    //constructors

    List() = default;
    //pre: none
    //post: the list is empty

    List(const List&);
    //pre: none
    //post: the list is the copy of the argument

    //destructor

    ~List();
    //pre: none
    //post: none

    //modifiers

    void push(T);
    //pre: none
    //post: the argument value is inserted as the last, size is increased by 1

    T pop();
    //pre: the list is not empty
    //post: the first value is removed, size is decreased by 1
    //return: the first value

    void reverse();
    //pre: none
    //post: the order of the list items is reversed

    void clear();
    //pre: none
    //post: the list is empty

    //selectors

    T front() const;
    //pre: the list is not empty
    //return: the first value

    T back() const;
    //pre: the list is not empty
    //return: the last value

    int size() const;
    //pre: none
    //return: the current size of the list

    void print() const;
    //pre: none
    //return: none, the contents of the list is printed, from the first to the last

    //queries

    bool empty() const;
    //pre: none
    //return: true if the list is empty, false otherwise

    //operators

    List& operator=(const List&);
    //pre: none
    //post: the list is the copy of the argument
    //return: the reference to the list

    bool operator==(const List&) const;
    //pre: none
    //return: true if the contents of the list is the same as the contents of the argument, false otherwise

};

template<typename T>
List<T>::List(const List<T> &s)
{
    Node* walker = s.head;
    while(walker != nullptr)
    {
        Node* creator = new Node(walker->value);
        if(tail != nullptr)
            tail->next = creator;
        else
            head = creator;
        tail = creator;
        walker = walker->next;
    }
    counter = s.counter;
}

template<typename T>
List<T>::~List()
{
    clear();
}

template<typename T>
void List<T>::push(T v)
{
    Node* creator = new Node(v);
    if(tail != nullptr)
        tail->next = creator;
    else
        head = creator;
    tail = creator;
    counter++;
}

template<typename T>
T List<T>::pop()
{
    if(counter == 0)
        throw logic_error("Empty list.");

    Node* killer = head;
    T result = killer->value;
    head = killer->next;
    if(tail == killer)
        tail = nullptr;
    delete killer;
    counter--;

    return result;
}

template<typename T>
void List<T>::reverse()
{
    Node* begin = nullptr;
    Node* end = nullptr;
    Node* walker = head;

    while(walker != nullptr)
    {
        Node* mover = walker;
        walker = walker->next;
        head = walker;
        if(tail == mover)
            tail = nullptr;
        mover->next = begin;
        begin = mover;
        if(end == nullptr)
            end = mover;
    }

    head = begin;
    tail = end;
}

template<typename T>
void List<T>::clear()
{
    while(head != nullptr)
    {
        Node* killer = head;
        head = killer->next;
        delete killer;
    }
    tail = nullptr;
    counter = 0;
}

template<typename T>
T List<T>::front() const
{
    if(counter == 0)
        throw logic_error("Empty list.");

    return head->value;
}

template<typename T>
T List<T>::back() const
{
    if(counter == 0)
        throw logic_error("Empty list.");

    return tail->value;
}

template<typename T>
int List<T>::size() const
{
    return counter;
}

template<typename T>
void List<T>::print() const
{
    Node* walker = head;
    while(walker != nullptr)
    {
        cout << walker->value << " "; //operator<< required for T
        walker = walker->next;
    }
    if(counter == 0)
        cout << "empty";
    cout << endl;
}

template<typename T>
bool List<T>::empty() const
{
    return (counter == 0);
}

template<typename T>
List<T>& List<T>::operator=(const List<T> &s)
{
    if(this != &s)
    {
        Node* pred = nullptr;
        Node* succ = head;
        Node* walker = s.head;

        while(walker != nullptr)
        {
            if(succ != nullptr)
            {
                succ->value = walker->value;
            }
            else
            {
                succ = new Node(walker->value);
                if(pred != nullptr)
                    pred->next = succ;
                else
                    head = succ;
            }
            pred = succ;
            succ = succ->next;
            walker = walker->next;
        }

        while(succ != nullptr)
        {
            Node* killer = succ;
            succ = succ->next;
            if(pred != nullptr)
                pred->next = succ;
            else
                head = succ;
            delete killer;
        }

        tail = pred;
        counter = s.counter;
    }

    return *this;
}

template<typename T>
bool List<T>::operator==(const List<T> &s) const
{
    if(counter != s.counter)
        return false;

    Node* walker = head;
    Node* walker2 = s.head;
    while(walker != nullptr)
    {
        if(!(walker->value == walker2->value)) //operator== required for T
            return false;
        walker = walker->next;
        walker2 = walker2->next;
    }

    return true;
}

#endif
