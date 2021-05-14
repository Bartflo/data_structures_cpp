#include <iostream>
#include "sznur.h"

using namespace std;

void Sznur::wypisz() const {
    if (counter == 0) {
        cout << "sznur is empty\n";
        return;
    }
    Node *walker = head;
    while (walker != nullptr) {
        cout << walker->value << " ";
        walker = walker->next;
    }
    cout << endl;
}

void Sznur::wstaw(int value) {
    if (counter == 0) {
        head = new Node(value, nullptr);
        tail = head;
        counter++;
        return;
    }
    Node *temp = new Node(value, nullptr);
    tail->next = temp;
    tail = temp;
    counter++;
}

int najmniejsza(int a, int b, int c) {
    int result = a;
    if (result > b) {
        result = b;
    }
    if (result > c) {
        result = c;
    }
    return result;
}

bool Sznur::moze_usun(int m, int a, Node *walker, Node *walker_prev) {
    if (m < a) {
        if (walker == head) {
            Node *temp = walker->next;
            delete walker;
            head = temp;
        } else {
            walker_prev->next = walker->next;
            delete walker;
        }
        counter--;
        return true;
    } else {
        return false;
    }
}

void Sznur::usun() {
    int ile_pozostalo = counter;
    Node *walker = head;
    Node *walker_prev = nullptr;
    while (ile_pozostalo >= 3) {
        int a, b, c;
        a = walker->value;
        b = walker->next->value;
        c = walker->next->next->value;
        int m = najmniejsza(a, b, c);


        Node *walker_next = walker->next;
        bool czy_usunieto = moze_usun(m, a, walker, walker_prev);
        if (czy_usunieto == false) {
            walker_prev = walker;
        }
        walker = walker_next;


        walker_next = walker->next;
        czy_usunieto = moze_usun(m, b, walker, walker_prev);
        if (czy_usunieto == false) {
            walker_prev = walker;
        }
        walker = walker_next;


        walker_next = walker->next;
        czy_usunieto = moze_usun(m, c, walker, walker_prev);
        if (czy_usunieto == false) {
            walker_prev = walker;
        }
        walker = walker_next;

        ile_pozostalo -= 3;
    }

    if (ile_pozostalo == 2) {
        int a, b;
        a = walker->value;
        b = walker->next->value;
        int m = min(a, b);

        Node *walker_next = walker->next;
        bool czy_usunieto = moze_usun(m, a, walker, walker_prev);
        if (czy_usunieto == false) {
            walker_prev = walker;
        }
        walker = walker_next;

        walker_next = walker->next;
        czy_usunieto = moze_usun(m, b, walker, walker_prev);
        if (czy_usunieto == false) {
            walker_prev = walker;
        }
        walker = walker_next;
    }
}
