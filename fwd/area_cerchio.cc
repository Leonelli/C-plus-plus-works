
// Primo programma.
// Stampa la stringa Hello sul terminale.
//

#include <iostream>
using namespace std;

int main()
{
  const float pi_greco = 3.14;
  float area;
  float circonferenza;
  int raggio;
  cout << "Dammi il raggio: " << endl;
  cin >> raggio;
  area = pi_greco*raggio*raggio;
  cout << "L'area e' " << area << endl;
  circonferenza = 2.0*pi_greco*raggio;
  cout << "La circonferenza e' " << circonferenza << endl;

  return 0;
}
