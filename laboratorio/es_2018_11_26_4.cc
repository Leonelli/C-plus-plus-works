using namespace std;
#include <iostream>


void leggiArray(double [], int&);
void stampaArray(const double [], int);
void concatenaArray(const double a[], const double b[], double c[], int n1, int n2);
void mescolaArray(const double a[], const double b[], double c[], int n);
void inverti( double a[], int n);
void scambia(double&,double&);
const int SIZE=100;

int main(){
  double a[SIZE];
  double b[SIZE];
  double c[2*SIZE];
  int n;
  leggiArray(a,n);
  leggiArray(b,n);
  mescolaArray(a,b,c,n);
  inverti(a,b,n);
  stampaArray(b,n);
  return 0;
}


void leggiArray(double a[], int& n)
{
	cout << "Dimensione array?: ";
        cin >> n;

	for (int i = 0; i < n; i++) {
        cout << i << ": ";
		cin >> a[i];
	};
}

void stampaArray(const double a[], int n)
{
 	for (int i = 0; i < n; i++)
          cout << '\t' << i << ": " << a[i] << endl;
}

void concatenaArray(const double a[], const double b[], double c[], int n1, int n2)
{
  for (int i=0;i<n1;i++)
    c[i]=a[i];
  for (int i=0;i<n2;i++)
    c[i+n1]=b[i];
}

void mescolaArray(const double a[], const double b[], double c[], int n)
{
  int j=0,k=0;
  for (int i = 0; i < 2*n; i++) {
    if(i%2==0){
      c[i]=a[j];
      j++;
    }
    else{
      c[i]=b[k];
      k++;
    }
  }
}

void scambia(double&a,double&b)
{
  double tmp=a;
  a=b;
  b=tmp;
}

void inverti( double a[], int n){
  int medio=n/2;
  for (int i = 0 ; i < medio ; i++) {
    scambia(a[i],a[n-i-1]);
  }
}
