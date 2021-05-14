#include <iostream>
#include "sznur.h"

using namespace std;

int main()
{
    Sznur s1;

    s1.wstaw(4);
    s1.wstaw(7);
    s1.wstaw(5);
    s1.wstaw(1);
    s1.wstaw(6);
    s1.wstaw(1);
    s1.wstaw(7);
    s1.wstaw(3);
    s1.wstaw(2);
    s1.wstaw(9);
    s1.wstaw(1);

    s1.wypisz(); // 4 7 5 1 6 1 7 3 2 9 1

    s1.usun();
    s1.wypisz();

    return 0;
}
