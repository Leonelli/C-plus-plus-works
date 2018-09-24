using namespace std;

#include <iostream>

int areaquadrato(){
  int base,altezza,area;
  cout << "dimmi base e altezza \n";
  cin >> base >> altezza;
  area = base*altezza;
  cout << "area = " << area << endl;
  return 0;
}

int areatrapezio(){
  float baseM,basem,altezza,area;
  cout << "dimmi base minore \n";
  cin >> basem;
  cout << "dimmi base maggiore \n";
  cin >> baseM;
  cout << "dimmi altezza \n";
  cin >> altezza;
  area = (baseM-basem)*altezza/2.0;
  cout << "area = " << area << endl;
  return 0;
}

int areatriangolo(){
 float base,altezza,area;
  cout << "dimmi base \n";
  cin >> base;
  cout << "dimmi altezza \n";
  cin >> altezza;
  area = base*altezza/2.0;
  cout << "area = " << area << endl;
  return 0;
}

int areacerchio(){
  const float pi=3.14;
  float area;
  int raggio;
  cout << "dimmi il raggio \n";
  cin >> raggio;
  area = raggio*raggio*pi;
  cout << "area = " << area << endl;
  return 0;
}

int scambio(){
  int a,b,c;
  cout << "inserisci 2 numeri: " << endl;
  cin >> a >>b;
  c=a;
  a=b;
  b=c;
  cout << "i numeri scambiati sono " << a << " e " << b << endl;
  return 0;
}

int main(){
  // int areaq = areaquadrato();
  // int areac = areacerchio();
  //int areat= areatrapezio();
  //int areatri=areatriangolo();
  int scambi = scambio();
  return 0;
}


