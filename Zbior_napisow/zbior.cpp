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
#include <cctype>

using namespace std;
int dodaj_slowo(string *);
int usun_slowo(string *);
int i, rozmiar, k, h, z;               // zmienne globalne
string przechowacz;

int main()
{
    string wybor;
    cout << "\n                                Witaj!";
    cout << "\n                   Na poczatek podaj rozmiar tablicy,\n              w ktorej bedziesz przechowywac swoje slowa:\n\n ?: ";
    cin >> rozmiar;
    string *tablica = new string[rozmiar];


    for(k = 0; k < rozmiar; k++)    // zerowanie tablicy
    {
        tablica[k] = "";
    }

    cout << "\n                       ***************************";
    cout << "\n                       *   Panel uzytkownika:    *\n";
    cout << "                       *   1. dodaj <napis>      *\n";
    cout << "                       *   2. usun <napis>       *\n";
    cout << "                       *   3. wypisz             *\n";
    cout << "                       *   4. pusty              *\n";
    cout << "                       *   5. pelny              *\n";
    cout << "                       ***************************\n";
    cout << "\nprzyklady uzycia komend:\ndodaj gwiazda, usun gwiazda: \n";


    for(i = 0; i < rozmiar; )
    {
        cin >> wybor;           // decyzja uzytkownika co chce zrobic
        cout << "______________________________________\n";

        if(wybor == "dodaj")
        {
            if(dodaj_slowo(tablica) == 1)
            {
                int x;
                for(x = 0; x < rozmiar; x++)        // szuka miejsca pustego do wpisania slowa
                {
                    if(tablica[x] == "")
                    {
                    tablica[x] = przechowacz;
                    cout << "Slowo dodane poprawnie!\n";
                    break;
                    }
                }
            }
            else
            {
                cout << "To slowo juz istnieje! \nNie moge go dodac. :(\n";
            }
        }
        if(wybor == "usun")
        {
            if(usun_slowo(tablica) == 1)
            {
                tablica[h] = "";
                cout << "Slowo usuniete poprawnie.\n";
            }
            else
            {
                cout << "Nie ma takiego slowa.\n";
            }
        }
        if(wybor == "wypisz")
        {
            cout << "\n\n                       Zawartosc tablicy:\n\n";\
            for(k = 0; k < rozmiar; k++)
            {
                cout << "                       [" << k  << "]"<< " <=> " << tablica[k] << endl;
            }

    cout << "\n                       ***************************";          // przypomnienie menu
    cout << "\n                       *   Panel uzytkownika:    *\n";
    cout << "                       *   1. dodaj <napis>      *\n";
    cout << "                       *   2. usun <napis>       *\n";
    cout << "                       *   3. wypisz             *\n";
    cout << "                       *   4. pusty              *\n";
    cout << "                       *   5. pelny              *\n";
    cout << "                       ***************************\n";
        }
        if(wybor == "pusty")
        {
            for(k = 0; k < rozmiar; k++)        // czyszczenie tablicy
            {
                tablica[k] = "";
            }
            cout << "Tablica jest teraz pusta!\n";
        }
        if(wybor == "pelny")
        {
                k = 0;

                for(z = 0; z < rozmiar; z++)    // liczy wystapienia w tablicy do k
                {
                    if(tablica[z] != "")
                    {
                        k++;
                    }
                }

                if(k == rozmiar)
                {
                    cout << "Tablica jest zapelniona!\n";
                }
                else
                {
                    int zlicz = 0;
                    cout << "Tablica nie jest jeszcze zapelniona.\n";

                    for(k = 0; k < rozmiar; k++)        // sprawdza stan zapelnienia tablicy
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
                    cout << "Stan zapelnienia tablicy: " << zlicz << "/" << rozmiar << endl;
                    zlicz = 0;  // wyzerowanie zmiennej zlicz po wyswietleniu
                }

        }
        cout << "______________________________________\n";
    }

}
/**************************************************************************/
int dodaj_slowo(string *tablica)
{
    cin >> przechowacz;

    for(z = 0; z < rozmiar; z++)
    {
                if(tablica[z] == przechowacz)       // jesli znajdzie slowo ktore juz jest w tablicy, zwraca 0
                {
                    return 0;
                }
    }
    return 1;
}
/**************************************************************************/
int usun_slowo(string *tablica)
{
    cin >> przechowacz;

    for(z = 0; z < rozmiar; z++)
    {
                if(tablica[z] == przechowacz)     // jesli znajdzie slowo ktore odpowiada temu ktore chcemy usunac, zwraca 1
                {
                    h = z;
                    return 1;
                }
    }
    return 0;
}
/**************************************************************************/
