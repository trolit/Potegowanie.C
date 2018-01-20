/*
Data: 04-01-2018
Autor: Pawel idzikowski, iddziku@gmail.com,
II rok Informatyki, ISI, WMiI UWM
Grupa: czwartek 15:00-16:30

Zadanie: 32

Temat: Sortowanie przez wstawianie.
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>      // wspolpraca z plikami!
using namespace std;

int main()
{
    int x = 0;
    int rozmiar = 0;                                       // rozmiar tablicy
    int suma_przed = 0;
    int suma_po = 0;
    int i, j, tmp, liczba;                                 // zmienne pomocnicze
    fstream plik;

    cout << "-> Sortowanie przez wstawianie <-\n\n" << endl;

    plik.open("plik_we.txt", ios::in);                     // in - tryb do odczytu

    int *tablica = new int[rozmiar];

    while(plik >> tablica[rozmiar])                         // zadeklarowanie miejsca w tablicy
    {                                                       // i jednoczesnie wrzucanie liczb do tablicy
        rozmiar++;
    }
    plik.close();


    for(x = 0; x < rozmiar; x++)                            // obliczenie sumy zawartosci tablicy
    {
        suma_przed = suma_przed + tablica[x];
    }

    // obliczenie sumy
    cout << "-> Suma liczb w tablicy = " << suma_przed << endl;

    // start zegara
    time_t start = time(0);                                 // uruchomienie zegara
    cout << "-> uruchomienie zegara:  " << start << endl;

    // tu sie odbywa sortowanie przez wstawianie
    for(i = 1; i < rozmiar; i++)
    {
        j = i;
        tmp = tablica[i];
        while((j>0) && (tablica[j-1] > tmp))
        {
            tablica[j] = tablica[j - 1];
            j--;
        }
        tablica[j] = tmp;
    }

    time_t end = time(0);                               // zatrzymanie zegara
    cout << "-> zatrzymanie zegara:  " << end << endl;

    for(x = 0; x < rozmiar; x++)                        // suma po posortowaniu tablicy
    {
        suma_po = suma_po + tablica[x];
    }

    fstream zapis;
    zapis.open("plik_wy.txt", ios::out);                // out - tryb do zapisu

    for(x = 0; x < rozmiar; x++)                        // zapis do pliku
    {
        zapis << tablica[x] << " ";
    }

    zapis.close();
    delete [] tablica;                                  // skasowanie tablic

    cout << "-> Suma przed posortowaniem: " << suma_przed << endl;
    cout << "-> Suma po posortowaniu: " << suma_po << endl;
    cout << "-> Czas sortowania: " << difftime(end, start) * 1000.0 << " ms" << endl;
    return 0;
}
