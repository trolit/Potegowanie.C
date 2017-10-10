/*
Data: 5-10-2017
Autor: Pawel idzikowski iddziku@gmail.com,
II rok Informatyki, ISI, WMiI UWM
Grupa: czwartek 15:00-16:30

Zadanie: 05

Temat: Program obliczajacy silnie.

Wersja C
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

long long liczba;
int i = 1;
int silnia = 1;

printf("\n\n***********************************************\n");
printf("* PROGRAM OBLICZAJACY SILNIE Z PODANEJ LICZBY *\n");
printf("***********************************************\n\n\n");

printf("   Podaj liczbe, ktorej silnie chcesz obliczyc: \n    ?: ");
scanf("%llu", &liczba);

if (liczba == 0)
{
    printf("\n   odp: Silnia liczby 0 wynosi 1.\n");
    return 0;
}

for(i = 1; i <= liczba; i++)
{
    silnia *= i;
}

printf("\n   odp: Silnia liczby %llu wynosi %d.\n", liczba, silnia);
printf("\n***********************************************\n\n\n\n\n\n\n\n\n");

return 0;
}
