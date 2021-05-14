#include <iostream>
#include "List.h"

using namespace std;

int main()
{
    List s1;

    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);

    s1.print(); //5 4 3 2 1
    cout << "Size: " << s1.size() << endl; //5
    cout << "Pop: " << s1.pop() << endl; //5
    s1.print(); //4 3 2 1
    cout << "Size: " << s1.size() << endl; //4

    List s2 = s1;

    s2.print(); //4 3 2 1
    cout << "Size: " << s2.size() << endl; //4
    s2.push(5);
    s2.print(); //5 4 3 2 1
    cout << "Size: " << s2.size() << endl; //5

    s1 = s2;
    cout << "Size: " << s1.size() << endl; //5

    if(s1 == s2)
        cout << "The lists are equal." << endl; //yes

    cout << "Pop: " << s1.pop() <<endl; //5
    s1.print(); //4 3 2 1
    s2.print(); //5 4 3 2 1

    s2.clear();
    s1.print(); //4 3 2 1
    s2.print(); //empty

    s1.reverse();
    s1.print(); //1 2 3 4

    return 0;
}
