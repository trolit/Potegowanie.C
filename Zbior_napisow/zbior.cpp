/*
Data: 19-10-2017
Autor: Pawel idzikowski, iddziku@gmail.com,
II rok Informatyki, ISI, WMiI UWM
Grupa: czwartek 15:00-16:30

Zadanie: 16

Temat: Zbior.
*/
#include <iostream>
#include <conio.h>
using namespace std;
int dodaj_slowo(string *);
int usun_slowo(string *);
int i, rozmiar, k, h, z;               // zmienne globalne
string przechowacz;

int main()
{
    int wybor;

    cout << "\nPodaj rozmiar tablicy, w ktorm bedziesz przechowywac swoje slowa:\n ?: ";
    cin >> rozmiar;
    string *tablica = new string[rozmiar];

    for(k = 0; k < rozmiar; k++)    // zerowanie tablicy
    {
        tablica[k] = "";
    }

    cout << "\n***************************";
    cout << "\n*  Panel uzytkownika:     *\n";
    cout << "*   1. dodaj <napis>      *\n";
    cout << "*   2. usun <napis>       *\n";
    cout << "*   3. wypisz             *\n";
    cout << "*   4. pusty              *\n";
    cout << "*   5. pelny              *\n";
    cout << "***************************\n";

    for(i = 0; i < rozmiar; )
    {
        cin >> wybor;

        if(wybor == 1)
        {
            if(dodaj_slowo(tablica) == 1)
            {
                int x;
                for(x = 0; x < rozmiar; x++)        // szuka miejsca pustego do wpisania slowa
                {
                    if(tablica[x] == "")
                    {
                    tablica[x] = przechowacz;
                    break;
                    }
                }
            }
            else
            {
                cout << "| To slowo juz istnieje! Nie moge go dodac. :(\n";
            }
        }
        if(wybor == 2)
        {
            if(usun_slowo(tablica) == 1)
            {
                tablica[h] = "";
                cout << "| Slowo usuniete poprawnie.\n";
            }
            else
            {
                cout << "| Nie ma takiego slowa.\n";
            }
        }
        if(wybor == 3)
        {
            cout << "\n\n| Zawartosc tablicy:\n\n";\
            for(k = 0; k < rozmiar; k++)
            {
                cout << k << " przechowuje slowo: " << tablica[k] << endl;
            }

            cout << "\n***************************";        // dla przypomnienia menu
            cout << "\n*  Panel uzytkownika:     *\n";
            cout << "*   1. dodaj <napis>      *\n";
            cout << "*   2. usun <napis>       *\n";
            cout << "*   3. wypisz             *\n";
            cout << "*   4. pusty              *\n";
            cout << "*   5. pelny              *\n";
            cout << "***************************\n";
        }
        if(wybor == 4)
        {
            for(k = 0; k < rozmiar; k++)
            {
                tablica[k] = "";
            }
            cout << "| Tablica jest teraz pusta!\n";
        }
        if(wybor == 5)
        {
                if(i == rozmiar)
                {
                    cout << "| Tablica jest zapelniona!\n";
                }

                else
                {
                    int zlicz = 0;

                    cout << "| Tablica nie jest jeszcze zapelniona.\n";
                    for(k = 0; k < rozmiar; k++)
                    {
                        if(tablica[k] != "")
                        {
                            zlicz++;
                        }
                        else
                        {
                            continue;
                        }
                    }
                    cout << "| Stan zapelnienia tablicy: " << zlicz << "/" << rozmiar << endl;
                    zlicz = 0;  // wyzerowanie zmiennej
                }

        }
        cout << "| Co teraz chcesz zrobic?\n";
    }
}
/**************************************************************************/
int dodaj_slowo(string *tablica)
{

    cout << "| Podaj swoje slowo ktore chcesz dodac:\n";
    cin >> przechowacz;

    for(z = 0; z < rozmiar; z++)
    {
                if(tablica[z] == przechowacz)
                {
                    return 0;
                }
      return 1;
    }
}
/**************************************************************************/
int usun_slowo(string *tablica)
{

    cout << "| Podaj slowo ktore chcesz usunac:\n";
    cin >> przechowacz;

    for(z = 0; z < rozmiar; z++)
    {
                if(tablica[z] == przechowacz)
                {
                    h = z;
                    return 1;
                }
    }
    return 0;
}
/**************************************************************************/
