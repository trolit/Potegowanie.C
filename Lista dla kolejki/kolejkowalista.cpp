/*
Data: 14-12-2017
Autor: Pawel idzikowski, iddziku@gmail.com,
II rok Informatyki, ISI, WMiI UWM
Grupa: czwartek 15:00-16:30

Zadanie: 28

Temat: Lista dla kolejki.
*/

#include <iostream>
using namespace std;

// zdefiniowanie listy
struct slistEl
{
    slistEl *next;
    int data;
};

// klasa kolejka
class queue
{
    private:
    slistEl *tail;

    public:
    queue();             // konstruktor
    ~queue();            // destruktor
    bool empty(void);    // sprawdza czy lista jest pusta
    int front(void);     // zwraca poczatek kolejki
    void push(int v);    // zapisuje do kolejki
    void pop(void);      // usuwa z kolejki
    void drukuj(void);   // wypisuje na ekran bez usuwania z kolejki stan kolejki
};

queue::queue()
{
    tail = NULL;
}

queue::~queue()
{
    while(tail) pop();
}

bool queue::empty(void)
{
    return tail;
}

int queue::front(void)
{
    if(tail)
    {
        return tail->next->data;
    }
}

void queue::push(int v)
{
    slistEl * p = new slistEl;
    p->data = v;
    if(tail)
    {
        p->next = tail->next;
        tail->next = p;
    }
    else
    {
        p->next = p;
    }
    tail = p;
}

void queue::pop(void)
{
    if(tail)
    {
        slistEl * p = tail->next;
        if(p->next != p)
        {
            tail->next = p->next;
        }
        else
        {
            tail = NULL;
        }
        delete p;
    }
}

int max_rozmiar_listy;          // zapisane przed funkcja drukuj aby kompilator zrobil dla zmiennych miejsce w pamieci
int biez_rozmiar_listy = 0;     // gdy nierownosc < to od 0 , gdyby nierownosc <= to od 1 dla put

void queue::drukuj(void)
{
    int counter = 1;                                                // licznik (zlicza dotychczasowe elementy z kolejki)
    while(tail != NULL && counter <= biez_rozmiar_listy)            // gdzie biez_rozmiar_listy to ile elementow obecnie znajduje sie w kolejce
    {
        cout << tail->next->data << " ";
        tail = tail->next;
        counter++;
    }
}

int main()
{
    queue Q;
    int i;
    string decyzja;

    cout << "Podaj rozmiar listy: ";
    cin >> max_rozmiar_listy;

    cout << "Lista dla kolejki" << endl;
    cout << "Dostepne komendy:\n" << endl;
    cout << "<> put <liczba>" << endl;
    cout << "<> get         (wyjmuje element z kolejki i podaje jego wartosc)" << endl;
    cout << "<> wypisz_wsio (odczytuje wszystkie wartosci bez wyjmowania ich z kolejki)" << endl;
    cout << "<> wypisz      (odczytuje wartosc bez wyjmowania go z kolejki)" << endl;
    cout << "<> koniec      (konczy dzialanie programu)" << endl;

    for(i = 0; i < 100; )
    {
        cin >> decyzja;

        if(decyzja == "put")
        {
            int liczba;
            cin >> liczba;
            if(biez_rozmiar_listy < max_rozmiar_listy)
            {
                cout << liczba << " trafia do kolejki..." << endl;
                Q.push(liczba);
                biez_rozmiar_listy++;
            }
            else
            {
                cout << "Lista jest pelna!" << endl;
            }
        }
        else if(decyzja == "get")
        {
            if(biez_rozmiar_listy > 0)
            {
                cout << Q.front() << " opuszcza kolejke..."<< endl;
                Q.pop();
                biez_rozmiar_listy = biez_rozmiar_listy - 1;            // zmniejsza rozmiar listy o 1 po usunieciu elementu z kolejki
            }
            else
            {
                cout << "Nie ma nic do usuniecia! Kolejka jest pusta." << endl;
            }
        }
        else if(decyzja == "wypisz_wsio")
        {
            if(biez_rozmiar_listy > 0)
            {
                cout << "Stan kolejki: " << endl;
                Q.drukuj();
                cout << endl;
            }
            else
            {
                cout << "Kolejka jest pusta." << endl;
            }
        }
        else if(decyzja == "wypisz")
        {
            if(biez_rozmiar_listy > 0)
            {
                cout << Q.front() << " jest pierwsza w kolejce!" << endl;
            }
            else
            {
                cout << "Nie ma nic w kolejce." << endl;
            }
        }
        else if(decyzja == "koniec")
        {
            cout << "Koniec dzialania programu." << endl;
            cout << "Milego dnia!" << endl;
            return 0;
        }
    }
    return 0;
}
