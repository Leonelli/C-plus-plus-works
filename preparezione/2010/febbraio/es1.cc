using namespace std;
#include <iostream>
#include <fstream>

int main(int argc, char const *argv[]) {

fstream in;
in.open(argv[1],ios::in);



char c;
char numeri1[4];
char numeri2[4];
char numeri3[4];
char numeri4[4];

int contatore = 0;
bool uno=false;
bool due=false;
bool tre=false;
bool quattro=false;

while (in.get(c)) {
  //cout << c << endl;
  if (c==':') {
    in>>numeri1;
    if ((int)*numeri1) {
      uno = true;
    }
    in>>numeri2;
    if ((int)*numeri2) {
      due = true;
    }
    in>>numeri3;
    if ((int)*numeri3) {
      tre = true;
    }
    in>>numeri4;
    if ((int)*numeri4) {
      quattro = true;
    }

    if (uno && due && tre && quattro) {
      contatore++;
    }
  }
}
cout << "Contatore = " << contatore << endl;
  return 0;
}
