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
char c; do {
      cout << "Inserisci il valore x in cui vuoi calcolare f(x) = 1 / (1 - x) ^ 2: ";
      cin >> x;
      while(x >= 1 || x <= -1) {
        cout << "Valore errato, prego reintrodurre (-1 < x < 1):";
cin >> x; }
      cout << "L’approssimazione di f(x) e’: ";
      cout << setprecision(10) << calcola(x, n, epsilon);
      cout << endl;
      cout << "Continuare (s/n)? ";
      cin >> c;
    } while(c != 'n' && c != 'N');
return(0);
}


double valoreAssoluto(double valore){
  if (valore>=0) {
    return valore;
  }
  else{
    return (valore*-1);
  }
}
double pot(double x, int n){
  if (n==0) {
    return 1;
  }
  else{
    return x * pot(x,n-1);
  }
}

double calcola(double x, int n, double epsilon){
  double step_n=0.0;
  double step_n_1=0.0;
  for (int i = 1; i < n && (valoreAssoluto(step_n-step_n_1)<epsilon); i++) {
    if (i!=1) {
      step_n_1=step_n;
    }
    step_n += (i*pot(x,i-1));
    cout << step_n<<endl;
  }
  return step_n;
}
