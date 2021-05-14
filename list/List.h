#ifndef List_H
#define List_H

struct List
{

private:

    struct Node
    {
        int value;
        Node* next;
        Node(int v, Node* n = nullptr)
        {
            value = v;
            next = n;
        }
    };

    Node* head = nullptr;
    int counter = 0;

    //invariants:
    //if nonempty, head points to the first node
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

    void push(int);
    //pre: none
    //post: the argument value is inserted as the first, size is increased by 1

    int pop();
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

#endif
