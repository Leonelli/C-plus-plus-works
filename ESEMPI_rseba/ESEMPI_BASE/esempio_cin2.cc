using namespace std;
#include <iostream> 

int main () 
{
  char x;
  double y;
  int z;
  
  cout << "dammi in sequenza un carattere, un reale ed un'intero" << endl;
  cin >> x >> y >> z;
  // nota: stessa cosa di:
  //  ((cin >> x) >> y) >> z;
  cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
return 0;
}

