#include <stdio.h>
#include <stdlib.h>
void rek_odwroc();          // funkcja nie przyjmuje zadnych argumentow

int main()
{
    printf("\n\n\n********************************************************\n");
    printf("Podaj tekst, * konczy mozliwosc wpisywania tekstu: \n\n");
    rek_odwroc();
    printf("\n\n\n********************************************************\n");
    return 0;
}

/*********************************************************/
void rek_odwroc()
{
    char litera;
    scanf("%c", &litera);

    if(litera == '*')           // jesli znak jest *, wypisuje *
    {
        printf("%c", '*');
    }

    if(litera != '*')
    {
        rek_odwroc();
        printf("%c", litera);
    }
}
/*********************************************************/

