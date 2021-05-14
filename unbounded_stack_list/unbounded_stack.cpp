#include <iostream>
#include "unbounded_stack.h"

using namespace std;

void Stack::push(int value)
{
    Node* creator = new Node(value, head);
    head = creator;
    counter++;
}

void Stack::print() const
{
    if(counter == 0) {
        cout << "stack is empty\n";
        return;
    }
    Node* walker = head;
    while(walker != nullptr)
    {
        cout<< walker->value << " ";
        walker = walker->next;
    }
    cout<<endl;
}

Stack::~Stack() {
    Node* walker = head;
    while(walker != nullptr)
    {
        Node* temp = walker->next;
        delete walker;
        walker = temp;
    }
}

int Stack::size() const
{
    return counter;
}

int Stack::pop()
{
    if( head != nullptr)
    {
        int result = head->value;
        Node* temp = head->next;
        delete head;
        head = temp;
        counter--;
        return result;
    }
    throw logic_error("stack empty");
}

int Stack::top() const
{
    if(head != nullptr)
    {
        return head->value;
    }
    throw logic_error("stack empty");
}

Stack::Stack(const Stack& source)
{
    counter = source.counter;
    if(source.counter == 0)
    {
        head = nullptr;
        counter = 0;
        return;
    }
    head = new Node(source.head->value, nullptr);
    Node* source_walker = source.head;
    Node* walker = head;
    while(source_walker->next != nullptr)
    {
        walker->next = new Node(source_walker->next->value, nullptr);
        source_walker = source_walker->next;
        walker = walker->next;
    }
}

Stack& Stack::operator=(const Stack& source)
{
    clear();
    counter = source.counter;
    if(source.counter == 0)
    {
        head = nullptr;
        counter = 0;
        return *this;
    }
    head = new Node(source.head->value, nullptr);
    Node* source_walker = source.head;
    Node* walker = head;
    while(source_walker->next != nullptr)
    {
        walker->next = new Node(source_walker->next->value, nullptr);
        source_walker = source_walker->next;
        walker = walker->next;
    }
    return *this;
}

void Stack::clear()
{
    Node* walker = head;
    while(walker != nullptr)
    {
        Node* temp = walker->next;
        delete walker;
        walker = temp;
    }
    head = nullptr;
    counter = 0;
}

bool Stack::empty() const
{
    return counter == 0;
}

bool Stack::operator==(const Stack& source) const
{
    if(counter != source.counter){
        return false;
    }
    if(counter == 0 && source.counter == 0){
        return true;
    }
    Node* walker = head;
    Node* source_walker = source.head;
    while(walker != nullptr){
        if(walker->value != source_walker->value){
            return false;
        }
        source_walker = source_walker->next;
        walker = walker->next;
    }
    return true;
}