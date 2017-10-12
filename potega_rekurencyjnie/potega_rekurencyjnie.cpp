#include <iostream>
#include <stdlib.h>
using namespace std;
int potega(int podstawa, int wykladnik);

int main()
{
    int podstawa, wykladnik;

    cout << "*******************************************\n";
    cout << "     Podaj podstawe:   ";
    cin >> podstawa;

    cout << "\n     A teraz podaj wykladnik:    ";
    cin >> wykladnik;

    cout << "\n     Wynik: " << potega(podstawa, wykladnik) << "\n";
    cout << "*******************************************\n\n\n\n\n\n\n\n";

    return 0;
}
/**********************************************************************/
int potega(int podstawa, int wykladnik)
{
    if (wykladnik == 0)
    {
        return 1;
    }
    else
    {
        return potega(podstawa, wykladnik-1)*podstawa;
    }
}
/**********************************************************************/
