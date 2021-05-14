#include <iostream>
#include "unbounded_queue.h"

using namespace std;

void Queue::push(int value)
{
    if(counter == 0){
        head = new Node(value,nullptr);
        tail = head;
        counter++;
        return;
    }
    Node* temp = new Node(value,nullptr);
    tail->next = temp;
    tail = temp;
    counter++;
}

void Queue::print() const
{
    if(counter == 0){
        cout<<"queue is empty\n";
        return;
    }
    Node* walker = head;
    while(walker != nullptr){
        cout<<walker->value<<" ";
        walker = walker->next;
    }
    cout<<endl;
}

Queue::~Queue()
{
    clear();
}

int Queue::size() const
{
    return counter;
}

int Queue::pop()
{
    if(counter == 0){
        throw logic_error("queue empty");
    }
    if(counter == 1 ) {
        int result = head->value;
        delete head;
        head = nullptr;
        tail = nullptr;
        counter = 0;
        return result;
    }
    int result = head->value;
    Node* next = head->next;
    delete head;
    head = next;
    counter--;
    return result;
}

int Queue::front() const
{
    if(counter == 0) {
        throw logic_error("queue empty");
    }
    return head->value;
}

int Queue::back() const
{
    if(counter == 0) {
        throw logic_error("queue empty");
    }
    return tail->value;
}

Queue::Queue(const Queue& source){
    Node* walker = source.head;
    while(walker != nullptr){
        push(walker->value);
        walker = walker->next;
    }
}

void Queue::clear()
{
    Node* walker = head;
    while(walker != nullptr){
        Node* temp = walker->next;
        delete walker;
        walker = temp;
    }
    head = nullptr;
    tail = nullptr;
    counter = 0;
}

Queue& Queue::operator=(const Queue& source)
{
    clear();
    Node* walker = source.head;
    while(walker != nullptr) {
        push(walker->value);
        walker = walker->next;
    }
}

bool Queue::operator==(const Queue& source) const
{
    if(source.counter != counter){
        return false;
    }
    Node* source_walker = source.head;
    Node* walker = head;
    while(walker != nullptr){
        if(walker->value == source_walker->value) {
            source_walker = source_walker->next;
            walker = walker->next;
        }else{
            return false;
        }
    }
    return true;
}