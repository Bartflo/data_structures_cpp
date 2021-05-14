#include <iostream>
#include "sorted_list.h"

using namespace std;

void SortedList::insert(int value)
{
    Node* pred = nullptr;
    Node* succ = head;
    while( succ != nullptr && succ->value < value){
        pred = succ;
        succ = succ->next;
    }
    Node* creator = new Node(value,succ);
    if(pred != nullptr){
        pred->next = creator;
    }else{
        head = creator;
    }
    counter++;
}

void SortedList::print() const
{
    if(counter == 0 ){
        cout<<"List is empty\n";
        return;
    }
    Node* walker = head;
    while(walker != nullptr){
        cout<<walker->value<<" ";
        walker = walker->next;
    }
    cout<<endl;
}

SortedList::~SortedList()
{
    clear();
}

int SortedList::size() const
{
    return counter;
}

int SortedList::pop()
{
    if( head != nullptr){
        int result  = head->value;
        Node* temp = head->next;
        delete head;
        head = temp;
        counter--;
        return result;
    }
    throw logic_error("stack empty");
}

void SortedList::remove(int value)
{
    Node* pred = nullptr;
    Node* succ = head;
    while( succ != nullptr && succ->value < value){
        pred = succ;
        succ = succ->next;
    }
    if( succ == nullptr || succ->value != value){
        throw logic_error("Not found");
    }
    Node* killer = succ;
    succ = succ->next;
    if( pred != nullptr){
        pred->next = succ;
    }else{
        head = succ;
    }
    delete killer;
    counter--;
}

void SortedList::remove_duplicates()
{
    Node* walker = head;
    while(walker != nullptr && walker->next != nullptr)
    {
        Node* walker_next = walker->next;
        if(walker->value == walker->next->value){
            walker->next = walker->next->next;
            counter--;
            delete walker;
        }else
        {
            walker = walker->next;
        }
        walker = walker_next;
    }
}

SortedList::SortedList(const SortedList& source)
{
    counter = source.counter;
    if(source.counter == 0){
        head = nullptr;
        counter = 0;
        return;
    }
    head = new Node(source.head->value, nullptr);
    Node* source_walker = source.head;
    Node* walker = head;
    while(source_walker->next != nullptr){
        walker->next = new Node(source_walker->next->value,nullptr);
        source_walker = source_walker->next;
        walker = walker->next;
    }
}

SortedList& SortedList::operator=(const SortedList& source)
{
    clear();
    counter = source.counter;
    if(source.counter == 0){
        head = nullptr;
        counter = 0;
        return *this;
    }
    head = new Node(source.head->value, nullptr);
    Node* source_walker = source.head;
    Node* walker = head;
    while(source_walker->next != nullptr){
        walker->next = new Node(source_walker->next->value,nullptr);
        source_walker = source_walker->next;
        walker = walker->next;
    }
    return *this;
}

void SortedList::clear()
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

bool SortedList::empty() const
{
    return counter == 0;
}

bool SortedList::operator==(const SortedList& source) const
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
