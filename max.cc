//
// Acquisire da tastiera due numeri reali,
// trovare il massimo tra questi due numeri
// e stamparlo a video 
// 

#include <iostream> 
using namespace std;

int main()
{
  float n1,n2;

  cout << "Inserisci un reale: ";
  cin >> n1;
  cout << "Inserisci un reale: ";
  cin >> n2;

  if (n1>n2)
    {
      cout << "Il massimo e': " << n1 << endl;
    }
  else
    {
      cout << "Il massimo e': " << n2 << endl;
    }
  
  return (0);
}

