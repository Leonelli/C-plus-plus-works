//
// Acquisto da tastiera un interno n
// stampare a video i primi n nymeri della serie di
// FIBONACCI
// 1 1 2 3 5 8 
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  long int numero,somma,ultimo,penultimo;

  cout <<"Inserisci il numero di elementi da stampare: ";
  cin >> numero;
  
  if (numero>0)
    {
      cout <<"1 ";
      if (numero>1)
	{
	  cout <<"1 ";
	  if (numero >2)
	    {
	      ultimo=1;
	      penultimo=1;
	      for(int i=2;i<numero;i++)
		{
		  somma=ultimo+penultimo;
		  cout<<somma<<" ";
		  penultimo=ultimo;
		  ultimo=somma;
		}
	    }
	}
    }
  
  
  return (0);
}

