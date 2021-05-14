#include <iostream>
#include <stdexcept>
#include "List.h"

using namespace std;

void List::push(int value)
{
    head = new Node(value, head);
    counter++;
}

void List::print() const
{
    if(counter == 0){
        cout<<"List is empty";
        cout<<endl;
        return;
    }
    Node* walker = head;
    while(walker != nullptr){
        cout<<walker->value<<" ";
        walker = walker->next;
    }
    cout<<endl;
}

int List::size() const
{
    return counter;
}

int List::pop()
{
    if(head != nullptr){
        int result = head->value;
        Node* temp = head->next;
        delete head;
        head = temp;
        counter --;
        return result;
    }
    throw logic_error("List is empty");
}

List::~List()
{
    clear();
}

List::List(const List& source)
{
    counter = source.counter;
    if(source.counter == 0){
        head = nullptr;
        counter = 0;
        return;
    }
    head = new Node(source.head->value,nullptr);
    Node* source_walker = source.head;
    Node* walker = head;
    while(source_walker->next != nullptr){
        walker->next = new Node(source_walker->next->value,nullptr);
        source_walker = source_walker->next;
        walker = walker->next;
    }
}

void List::clear()
{
    Node* walker = head;
    while(walker != nullptr){
        Node* temp = walker->next;
        delete walker;
        walker = temp;
    }
    head = nullptr;
    counter = 0;
}

List& List::operator=(const List& source)
{
    clear();
    counter = source.counter;
    if(source.counter == 0 ){
        head = nullptr;
        counter = 0;
        return *this;
    }
    head = new Node(source.head->value,nullptr);
    Node* source_walker = source.head;
    Node* walker = head;
    while(source_walker->next != nullptr){
        walker->next = new Node(source_walker->next->value,nullptr);
        source_walker = source_walker->next;
        walker = walker->next;
    }
    return *this;
}

bool List::operator==(const List& source) const
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

void List::reverse()
{
    Node* current = head;
    Node* prev = nullptr;
    Node* next = nullptr;
    while(current != nullptr){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

bool List::empty() const
{
    return counter == 0;
}