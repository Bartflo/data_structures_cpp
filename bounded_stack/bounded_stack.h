#ifndef Stack_H
#define Stack_H

struct Stack{

private:
    int* data = nullptr;
    int capacity = 0;
    int counter = 0;

    //invariants:
    //the size of data array is capacity
    //counter is between 0 (empty stack) and capacity(full stack)
    //if nonempty, the stack starts at index 0 and ends at counter-1
public:

    //CONSTRUCTORS
    Stack(int = 10);
    //precondition: the argument is positive
    //post: the stack capacity equals the argument value, the stack is empty

    Stack(const Stack&); //copy
    //precondition: none
    //post: the stack is the copy of the argument


    //destructor
    ~Stack(); //delete
    //precondition: none
    //post: none


    //MODIFIERS

    void push(int);
    //pre: the stack is not full
    //post: the argument value is on top, size is increased by 1

    int pop();
    //pre: the stack is not empty
    //post: the top value is removed, size is decreased by 1
    //return: the top value

    void clear();
    //pre: none;
    //post: the stack is empty

    //SELECTORS

    int top() const;
    //pre: the stack is not empty
    //return: the top value

    int size() const;
    //pre: none;
    //return: the current size of the stack

    void print() const;
    //pre: none;
    //return: none, the contents of the stack is printed, from top to bottom

    //QUERIES

    bool empty() const;
    //pre: none;
    //return: true if the stack is empty, false otherwise

    //OPERATORS

    Stack& operator=(const Stack&);
    //pre: none
    //post: the stack is the copy of the argument
    //return: the reference of the stack

    bool operator ==(const Stack&) const;
    //pre: none
    //return: true if the contents of the stack is the same as the contents of the argument, false otherwise



};

#endif // Stack_H
