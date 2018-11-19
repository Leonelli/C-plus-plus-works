using namespace std;
#include <iostream>

bool palindroma();

int main(){
    cout << "inserisci una stringa: ";
    if (palindroma()) {
      cout << "stringa palindroma";
    }
    else{
      cout << "NON è una stringa palindroma";
    }
    cout <<endl;
    return 0;
}

bool palindroma(){
  char x,y;
  cin.get(x);
  bool res=false;
  if (x=='.') {
    res = true;
  }
  else if(palindroma()){
    cin.get(y);
    res = (x==y);
  }
  return res;
}
