#ifndef Queue_H
#define Queue_H

struct Queue
{

private:

    int* data = nullptr;
    int capacity = 10;
    int counter = 0;
    int first = 0;
    int afterLast = 0;

    //invariants:
    //the size of data array is capacity
    //counter is between 0 (empty queue) and capacity
    //if nonempty, the queue starts at index first and ends at afterLast-1
    //first is between 0 and capacity-1
    //afterLast is between 0 and capacity

public:

    //constructors

    Queue();
    //pre: none
    //post: the queue is empty, but with default capacity

    Queue(const Queue&);
    //pre: none
    //post: the queue is the copy of the argument

    //destructor

    ~Queue();
    //pre: none
    //post: none

    //modifiers

    void push(int);
    //pre: none
    //post: the argument value is the last, size is increased by 1

    int pop();
    //pre: the queue is not empty
    //post: the first value is removed, size is decreased by 1
    //return: the first value

    void clear();
    //pre: none
    //post: the queue is empty

    //selectors

    int front() const;
    //pre: the queue is not empty
    //return: the first value

    int back() const;
    //pre: the queue is not empty
    //return: the last value

    int size() const;
    //pre: none
    //return: the current size of the queue

    void print() const;
    //pre: none
    //return: none, the contents of the queue is printed, from first to last

    //queries

    bool empty() const;
    //pre: none
    //return: true if the queue is empty, false otherwise

    //operators

    Queue& operator=(const Queue&);
    //pre: none
    //post: the queue is the copy of the argument
    //return: the reference to the queue

    bool operator==(const Queue&) const;
    //pre: none
    //return: true if the contents of the queue is the same as the contents of the argument, false otherwise

};

#endif

