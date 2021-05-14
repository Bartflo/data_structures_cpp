#include <iostream>
#include <stdexcept>
#include "unbounded_queue.h"

using namespace std;

Queue::Queue(){
    data = new int[capacity];
}

Queue::~Queue(){
    delete [] data;
}

void Queue::push(int v){
    if(afterLast == capacity){
        if(counter < capacity){ // shift to the left
            for(int i=0;i<counter;i++){
                data[i] = data[first + i];
            }
            first = 0;
            afterLast = counter;
        }
        else{ //extend the array
            capacity *=2;
            int* temp = new int[capacity];
            for(int i=0;i<counter;i++){
                temp[i] = data[i];
            }
            delete [] data;
            data = temp;
        }
    }

    data[afterLast] = v;
    afterLast++;
    counter++;
}

void Queue::print() const
{
    if(counter == 0){
        cout<<"Empty stack"<<endl;
    }else{
        cout<<"Queue: ";
        for(int i=first;i<counter+first;i++){
            cout<<data[i]<<" ";
        }
    }
    cout<<endl;
}

int Queue::pop(){
    if(counter == 0 ){
        throw logic_error("Empty queue");
    }
    int v = data[first];
    first++;
    counter--;
    return v;
}
void Queue::clear()
{
    counter = 0;
    first = 0;
    afterLast = 0;
    capacity = 10;
    delete [] data;
    data = new int[capacity];
}

int Queue::front() const
{
    if(counter == 0){
        throw logic_error("The array is empty");
    }
    return data[first];
}

int Queue::back() const
{
    if(counter == 0){
        throw logic_error("The array is empty");
    }
    return data[counter+first-1];
}

int Queue::size() const
{
    return counter;
}

bool Queue::empty() const
{
    return counter == 0;
}
Queue::Queue(const Queue &source)
{
    capacity = source.capacity;
    counter = source.counter;
    first = source.first;
    afterLast = source.afterLast;
    data = new int[capacity];
    for(int i=first;i<counter+first;i++){
        data[i] = source.data[i];
    }
}

Queue& Queue::operator=(const Queue &source)
{
    delete [] data;
    capacity = source.capacity;
    counter = source.counter;
    first = source.first;
    afterLast = source.afterLast;
    data = new int[capacity];
    for(int i=first;i<counter+first;i++){
        data[i] = source.data[i];
    }
}

bool Queue::operator==(const Queue &source) const
{
    if(counter != source.counter){
        return false;
    }
    for(int i=0;i<counter;i++){
        if(data[i+first] != source.data[i+source.first]){
            return false;
        }
    }
    return true;
}



