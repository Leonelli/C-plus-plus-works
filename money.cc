using namespace std;
#include <iostream>

int main(){
  int cinque,dieci,venti,cinquanta,cento,duecento,cinquecento;
  cout << "Quante banconote da 50?: ";
  cin >> cinquanta;
  cinquanta*=50;
  cout << "Quantità: " << cinquanta << endl;
  cout << "Quante banconote da 20?: ";
  cin >> venti;
  venti*=20;
  cout << "Quantità: " << venti << endl;
  cout << "Quante banconote da 10?: ";
  cin >> dieci;
  dieci*=10;
  cout << "Quantità: " << dieci << endl;
  cout << "Quante banconote da 5?: ";
  cin >> cinque;
  cinque*=5;
  cout << "Quantità: " << cinque << endl;
  cout << "----------------------------" << endl;
  cout << "Totale: " <<  cinquanta+venti+dieci+cinque<< endl;


  return 0;

}
