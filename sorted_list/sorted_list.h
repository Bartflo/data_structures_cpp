#ifndef SortedList_H
#define SortedList_H

struct SortedList
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
    //if nonempty, head points to the first node (the lowest one)
    //the next for the first node points to the second node, etc.
    //the next for the last node is null
    //counter is at least 0 (empty list) and it is the number of nodes (size of the list)

public:

    //constructors

    SortedList() = default;
    //pre: none
    //post: the list is empty

    SortedList(const SortedList&);
    //pre: none
    //post: the list is the copy of the argument

    //destructor

    ~SortedList();
    //pre: none
    //post: none

    //modifiers

    void insert(int);
    //pre: none
    //post: the argument value is inserted in the ascending order, size is increased by 1

    int pop();
    //pre: the list is not empty
    //post: the lowest value is removed, size is decreased by 1
    //return: the lowest value

    void remove(int);
    //pre: the argument value is in the list
    //post: the first occurrence of the argument value is removed, size is decreased by 1

    void remove_duplicates();

    void clear();
    //pre: none
    //post: the list is empty

    //selectors

    int count(int) const;
    //pre: none
    //return: the number of occurrences of the argument value

    int size() const;
    //pre: none
    //return: the current size of the list

    void print() const;
    //pre: none
    //return: none, the contents of the list is printed, from the lowest to the highest value

    //queries

    bool empty() const;
    //pre: none
    //return: true if the list is empty, false otherwise

    //operators

    SortedList& operator=(const SortedList&);
    //pre: none
    //post: the list is the copy of the argument
    //return: the reference to the list

    bool operator==(const SortedList&) const;
    //pre: none
    //return: true if the contents of the list is the same as the contents of the argument, false otherwise

};

#endif

