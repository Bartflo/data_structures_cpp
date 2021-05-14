#include <iostream>
#include "sorted_list.h"

using namespace std;

int main()
{
    SortedList s1;

    s1.insert(3);
    s1.insert(3);
    s1.insert(3);
    s1.insert(2);
    s1.insert(2);
    s1.insert(2);
    s1.insert(3);
    s1.insert(3);
    s1.insert(3);
    s1.insert(1);
    s1.insert(4);
    s1.insert(4);
    s1.insert(4);

    s1.print(); //1 2 3 3 4
    cout << "Size: " << s1.size() << endl; //5
    s1.remove_duplicates();
    s1.print();
    cout << "Pop: " << s1.pop() << endl; //1
    s1.print(); //2 3 3 4
    cout << "Size: " << s1.size() << endl; //4
    s1.remove(3);
    s1.print(); //2 3 4
    cout << "Size: " << s1.size() << endl; //3

    SortedList s2 = s1;

    s2.print(); //2 3 4
    s2.insert(4);
    s2.print(); //2 3 4 4

    s1 = s2;

    if(s1 == s2)
        cout << "The lists are equal." << endl; //yes

    cout << "Pop: " << s1.pop() <<endl; //2
    s1.print(); //3 4 4
    s2.print(); //2 3 4 4

    s2.clear();
    s1.print(); //3 4 4
    s2.print(); //empty

    return 0;
}

