#include <iostream>
#include <cstdlib>
using namespace std;

int fibonacci(int n);

int main()
{

  int n;


  cout << "\n\n\n\n'Ciag Fibonacciego' - rekurencyjnie\n";
  cout << "Podaj wyrazu ciagu, ktorego wartosc chcesz obliczyc: ";
  cin >> n;

  cout << "\n\nodp: " << n <<" wyraz ciagu ma wartosc "<< fibonacci(n) << endl;
  cout << "\n\n\n\n\n";
  return 0;
}

/********************************************************/
int fibonacci(int n)
{
  if(n <= 2)
  {
    return 1;
  }

  return fibonacci(n - 2) + fibonacci(n - 1);
}
/********************************************************/


