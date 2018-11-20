using namespace std;
#include <iostream>

//calcolo del fattoriale

int fact(int num) 
{
  int fattoriale = 1;
  for (int i=1; i<=num; i++)
    fattoriale *= i;
  return fattoriale;
}

int main() 
{
  int  num;
  int fattoriale;
  
  cout << "Dammi il numero: ";
  cin >> num;
  fattoriale=fact(num);
  cout  << "Fact = "  << fattoriale   << endl;
return 0;
}

