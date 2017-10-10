/*
Data: 5-10-2017
Autor: Pawel idzikowski iddziku@gmail.com,
II rok Informatyki, ISI, WMiI UWM
Grupa: czwartek 15:00-16:30

Zadanie: 01

Temat: Program obliczajacy potege dwoch liczb calkowitych zapisanych w formie 'podstawa', 'potega'
podanych przez uzytkownika.
*/

#include <stdio.h>

int potegowanie(int podstawa, int potega);
int sprawdz(int potega);

int wynik;


int main(void)
{
 int podstawa, potega;

    printf("***************************************************\n\n");
    printf("Program obliczajacy potege dwoch liczb calkowitych\n\n");
    printf("    1) Podaj podstawe:\n    =>          ");
    scanf("%d", &podstawa);
    printf("    2) Teraz podaj potege:\n    =>          ");
    scanf("%d", &potega);

    sprawdz(potega);

    potegowanie(podstawa, potega);          // wywolanie funkcji potegowanie

    printf("\n\n             %d\n", potega);
    printf("            %d   =  %d\n", podstawa, wynik);
    printf("***************************************************\n");
    return 0;
}

int sprawdz(int potega)
{
    while(potega < 0)
    {
        printf("Zle dane wejsciowe!\n");

        printf("Podaj potege\n");
        scanf("%d", &potega);
    }

    return wynik = 1;           // zwraca wynik = 1 jesli podamy prawidlowa potege
}

int potegowanie(int podstawa, int potega)
{

while(potega > 0 )
{
    wynik = wynik * podstawa;
    potega = potega - 1;
}

return wynik;
}


