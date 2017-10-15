/*
Data: 12-10-2017
Autor: Pawel idzikowski, iddziku@gmail.com,
II rok Informatyki, ISI, WMiI UWM
Grupa: czwartek 15:00-16:30

Zadanie: 12

Temat: Palindrom.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>                  // biblioteka do wykorzystania funckji wbudowanej strlen - string length

int palindrom(char *tablica, int i, int j);             // *tablica oznacza wskazywanie na tablice o nazwie tablica

int main()
{
    char tablica[100];               // tu przetrzymamy slowo, ktore uzytkownik chce sprawdzic

    printf("\n\n\n********************************************************\n");
    printf("Podaj slowo aby sprawdzic czy jest palindromem\n\n");
    scanf("%s", tablica);

    if(palindrom(tablica, 0, strlen(tablica) - 1))
    {
        printf("%s jest palindromem \n", tablica);
    }
    else
    {
        printf("%s nie jest palindromem \n", tablica);
    }
    return 0;
}

/*********************************************************/
int palindrom(char *tablica, int i, int j)
{

    if(i >= j)                                      // gdyby slowo bylo np. kajak, to jak "wskaznik" i bedzie na literze j, to bedzie i >= j, zatem zwroci prawde
    {
        return 1;
    }

    if(tablica[i] == tablica[j])                    // jesli litera ktora wskazuje i jest rowna literze ktora wskazuje j
    {
        return palindrom(tablica, i+1, j-1);        // przesun wskaznik i w prawo, przesun wskaznik j w lewo
    }

    return 0;
}
/*********************************************************/
