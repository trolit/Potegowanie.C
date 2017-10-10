/*
Program ktory przedstawia postac dwojkowa liczby calkowitej
wpisanej przez uzytkownika.
*/

#include <stdio.h>

void do_binar(int n);

int main(void)
{
  int liczba;

  printf("\n********************************************\n");
  printf("Podaj liczbe calkowita (q konczy program):\n\n      ?:");


  while (scanf("%d", &liczba) == 1)
  {
     printf("\n  ...postac binarna podanej liczby: ");

     do_binar(liczba);          // wywolanie funkcji
     putchar('\n');

     printf("\n\nPodaj liczbe calkowita (q konczy program):\n\n      ?:");
  }

  printf("\n********************************************\n");
  printf("\n        ...Koniec dzialania programu...\n\n\n\n\n\n\n\n");


  return 0;
}

/**********************************************************/
void do_binar(int n)   /* funkcja rekurencyjna */
{
  int r;

  r = n % 2;
  if (n >= 2)
     do_binar(n / 2);

  putchar('0' + r);

  return;
}
/**********************************************************/
