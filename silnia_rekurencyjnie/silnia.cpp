#include <iostream>
#include <stdlib.h>
using namespace std;
long long silnia(int n);

int main()
{
 unsigned int liczba;

 cout << "\nProgram obliczajacy silnie rekurencyjnie\n";
 cout << "******************************************\n\n\n";
 cout << "Podaj liczbe: ";
 cin >> liczba;
 cout << "\n\n" << liczba << "! = " << silnia(liczba) << endl;
 cout << "\n******************************************\n\n\n\n\n";

 return 0;
}
/**********************************************/
long long silnia(int n)
{

 if(n < 2)
 {
        return 1;
 }

return n * silnia(n - 1);
}
/**********************************************/
