/*
Data: 5-10-2017
Autor: Pawel idzikowski iddziku@gmail.com,
II rok Informatyki, ISI, WMiI UWM
Grupa: czwartek 15:00-16:30

Zadanie: 05

Temat: Program obliczajacy silnie.

Wersja C++
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

long long liczba;
int i = 1;
int silnia = 1;

cout << "\n\n***********************************************\n";
cout << "* PROGRAM OBLICZAJACY SILNIE Z PODANEJ LICZBY *\n";
cout << "***********************************************\n\n\n";

cout << "   Podaj liczbe, ktorej silnie chcesz obliczyc:     " << endl;
cout << "   ?: ";
cin >> liczba;

if (liczba == 0)
{
    cout << "\n   odp: Silnia liczby 0 wynosi 1." << endl;
    cout << "\n***********************************************\n\n\n";
    return 0;
}

for(i = 1; i <= liczba; i++)
{
    silnia *= i;
}

cout << "\n   odp: Silnia liczby " << liczba << " wynosi " << silnia;
cout << "\n***********************************************\n\n\n\n\n\n\n\n\n";

return 0;
}
