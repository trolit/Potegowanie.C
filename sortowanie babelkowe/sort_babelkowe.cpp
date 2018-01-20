/*
Data: 04-01-2018
Autor: Pawel idzikowski, iddziku@gmail.com,
II rok Informatyki, ISI, WMiI UWM
Grupa: czwartek 15:00-16:30

Zadanie: 31

Temat: Sortowanie babelkowe.
*/
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>                                // biblioteka do losowania liczb
using namespace std;

int main()
{
    static int tablica[100];
    int x, suma = 0;

    srand(time(NULL));

    for(x = 0; x < 100; x++)
    {
        tablica[x] = rand() % 100 + 1;
        suma = suma + tablica[x];
    }

    cout << "Tablica wejsciowa: " << endl;
    for(x = 0; x < 100; x++)                         // wypisanie elementow tablicy
    {
        cout << tablica[x] << " ";
    }

    cout << "\nSuma zbioru: " << suma << endl;

    int j;
    for(x = 0; x < 100; x++)
    {
        for(j = 0; j < 99; j++)
        {
            if(tablica[j] > tablica[j+1])
            {
                swap(tablica[j], tablica[j+1]);     // wykorzystanie metody wbudowanej swap
            }
        }
    }

    cout << "\n\nPosortowana tablica: " << endl;
    for(x = 0; x < 100; x++)                        // wypisanie elementow tablicy
    {
        cout << tablica[x] << " ";
    }

    suma = 0;
    for(x = 0; x < 100; x++)               // zsumowanie zawartosci tablicy
    {
        suma = suma + tablica[x];
    }

    cout << "\nSuma zbioru: " << suma << endl << endl;
    return 0;
}
