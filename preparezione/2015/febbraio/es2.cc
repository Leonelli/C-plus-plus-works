#include <iostream>
#include <iomanip>
using namespace std;

  double valoreAssoluto(double valore);
  double pot(double x, int n);
  double calcola(double x, int n, double epsilon);

  int main () {
    double epsilon, x;
    int n;
    cout << "Inserisci il numero di termini dell’approssimazione: ";
    cin >> n;
    cout << "Inserisci l’errore massimo epsilon: ";
    cin >> epsilon;
	char c;
	do {
      cout << "Inserisci il valore x in cui vuoi calcolare f(x) = 1 / (1 - x) ^ 2: ";
      cin >> x;
		while(x >= 1 || x <= -1) {
		cout << "Valore errato, prego reintrodurre (-1 < x < 1):";
		cin >> x;
		}
      cout << "L’approssimazione di f(x) e’: ";
      cout << setprecision(10) << calcola(x, n, epsilon);
      cout << endl;
      cout << "Continuare (s/n)? ";
      cin >> c;
    } while(c != 'n' && c != 'N');

return(0);
}

double valoreAssoluto(double valore){

}

//work
double pot(double x, int n){
  double ris=1;
  for (int i = 0; i < n; i++) {
    ris*=x;
  }
  return ris;
}

double calcola(double x, int n, double epsilon){
  double ris=0;
  for (int i = 1; i <= n; i++) {
    //formula
    ris=i*pot(x,i-1);
  }
  return ris;
}
