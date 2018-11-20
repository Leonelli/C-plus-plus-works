using namespace std;
#include <iostream>

//calcolo del fattoriale

int main() 
{
  int fattoriale, num;

  cout << "Dammi il numero: ";
  cin >> num;
  fattoriale=1;
  for (int i=1; i<=num; i++)
    fattoriale *= i;
  cout  << "Fact = "  << fattoriale   << endl;
  
return 0;
}
