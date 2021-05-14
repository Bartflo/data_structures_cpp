#include <iostream>
#include "bounded_stack.h"

using namespace std;

Stack::Stack(int size){
    if(size < 1){
        throw invalid_argument("Wrong size");
    }
    capacity = size;
    data = new int[capacity];
}

Stack::~Stack(){
    delete [] data;
}

void Stack::push(int value){
    if(counter == capacity){
        throw logic_error("Full stack");
    }
    data[counter] = value;
    counter++;
}

void Stack::print()const{
        if(counter == 0){
            cout<<"Empty stack"<<endl;
        }else{
            for(int i = counter - 1;i>=0;i--){
                cout<<data[i]<<" ";
            }
        }
        cout<<endl;
}

int Stack::pop(){
    if(counter == 0){
        throw logic_error("Empty stack");
    }
    int value = data[counter - 1];
    counter--;
    return value;
}

int Stack::top() const{
    if(counter == 0){
        throw logic_error("Empty stack");
    }
    return data[counter-1];

}

int Stack::size() const{
    return counter;
}

Stack::Stack(const Stack &source){
    capacity = source.capacity;
    counter = source.counter;
    data = new int[capacity];
    for(int i = 0;i<counter;i++){
        data[i] = source.data[i];
    }
}

void Stack::clear()
{
    counter = 0;
}

Stack& Stack::operator=(const Stack &source)
{
    clear();
    capacity = source.capacity;
    counter = source.counter;
    data = new int[capacity];
    for(int i=0;i<counter;i++){
        data[i] = source.data[i];
    }
}
bool Stack::empty() const
{
    return counter == 0;
}
bool Stack::operator==(const Stack &other) const
{
    if(counter != other.counter){
        return false;
    }

    for(int i=0;i<counter;i++){
        if(data[i] != other.data[i]){
            return false;
       }
    }
    return true;
}



