#ifndef SZNUR_H
#define SZNUR_H

struct Sznur
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
    Node* tail = nullptr;
    int counter = 0;

    bool moze_usun(int,int,Node*,Node*);

public:

    Sznur() = default;

    void wypisz() const;

    void wstaw(int);
    //dodaje na koniec sznura element zawierajacy liczbe podana jako parametr;

    void usun();

};



#endif //SZNUR_H
