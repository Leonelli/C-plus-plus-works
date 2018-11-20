using namespace std;
#include <iostream>

const int size = 100;

void ReadArray(double [], int&);
void printArray(const double [], int);
double sum(const double a[], int n);

int main()
{
  int n;
  double b[size];
  ReadArray(b,n);
  cout << "Il vettore ha " << n << " elementi:\n";
  printArray(b,n);
  cout << "La somma dei suoi elementi e'  " << sum(b,n) << "\n";
  return 0;
}

void ReadArray(double a[], int& n)
{
  cout << "Quanti elementi?: ";
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << "a[" << i << "]: ";  
    cin >> a[i];
  };
}

void printArray(const double a[], int n)
{
   for (int i = 0; i < n; i++)
     cout << '\t' << "a[" << i << "]: " << a[i] << endl;
}

double sum(const double a[], int n)
{
  double s = 0.0;
  for (int i = 0; i < n; i++)
    s += a[i];
  return s;
}

