/*
Data: 14-12-2017
Autor: Pawel idzikowski, iddziku@gmail.com,
II rok Informatyki, ISI, WMiI UWM
Grupa: czwartek 15:00-16:30

Zadanie: 27

Temat: Lista dla stosu.
*/

#include <iostream>
using namespace std;

// zdefiniowanie stosu
struct slistEl
{
    slistEl * next;
    int data;
};

class stack
{
    private:
    slistEl * s; // lista przechowujaca stos

    public:
    stack();     // konstruktor
    ~stack();    // destruktor

    bool empty(void);           // metoda empty (bedzie sprawdzac czy stos jest pusty)
    slistEl * top(void);        // metoda zwracajaca ostatni element stosu
    void push(int v);           // metoda zapisujaca na stos
    void pop(void);             // metoda kasujaca ze stosu element z gory
    void wypisz(void);          // metoda wypisujaca ze stosu
};

stack::stack()
{
    s = NULL;
}

stack::~stack()
{
    while(s) pop();
}

// metoda empty (bedzie sprawdzac czy stos jest pusty)
bool stack::empty(void)
{
    return !s;
}

// metoda zwracajaca ostatni element stosu
slistEl * stack :: top(void)
{
    return s;
}

// metoda zapisujaca na stos
void stack::push(int v)
{
    slistEl * e = new slistEl;
    e->data = v;
    e->next = s;
    s = e;
}

// metoda kasujaca ze stosu element z gory
void stack::pop(void)
{
    if(s)
    {
        slistEl * e = s;
        s = s->next;
        delete e;
    }
}

int rozmiar_stosu;
int stan_stosu = 0;

int main()
{
    stack s;

    int i;
    string decyzja;
    int liczba;

    cout << "Podaj rozmiar stosu: ";
    cin >> rozmiar_stosu;

    cout << "\n\n-> Lista dla Stosu. <- \nDostepne komendy: \n" << endl;
    cout << "<> push <liczba>" << endl;
    cout << "<> pop     (zdejmuje i podaje wartosc ze stosu)" << endl;
    cout << "<> wypisz  (odczytuje wartosc bez zdejmowania elementu ze stosu)" << endl;
    cout << "<> koniec  (konczy dzialanie programu)" << endl;

    for(i = 0; i < 100; )
    {
        cin >> decyzja;

        if(decyzja == "push")
        {
            if(stan_stosu < rozmiar_stosu)
            {
            cin >> liczba;
            s.push(liczba);
            cout << liczba << " trafia do stosu." << endl;
            stan_stosu++;
            }
            else
            {
                cout << "Stos jest pelny! Skasuj element aby zrobic miejsce!" << endl;
            }
        }
        else if(decyzja == "pop")
        {
            if(stan_stosu > 0)                                          // gdy w stosie jest chociaz jeden element to moze go usunac, w przeciwnym wypadku wypisz informacje na ekran
            {
            cout << s.top()->data << " zostaje usuniete ze stosu\n";
            s.pop();
            stan_stosu = stan_stosu - 1;
            }
            else
            {
                cout << "Nie ma nic do usuniecia poniewaz stos jest pusty!" << endl;
            }
        }
        else if(decyzja == "wypisz")
        {
            if(stan_stosu > 0)
            {
            cout << s.top()->data << " znajduje sie u gory stosu" << endl;
            }
            else
            {
                cout << "Stos jest pusty..." << endl;
            }
        }
        else if(decyzja == "koniec")
        {
            cout << "Koniec dzialania programu <<<<<<<<<<<<<<" << endl;
            cout << "Milego dnia <<<<<<<<<<<<<<<<<" << endl;
            return 0;
        }
    }
    return 0;
}
