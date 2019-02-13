#include <iostream>
#include <cstring>
using namespace std;

const char SEGNAPOSTO = '!';
const int DIMMAX = 40;
// Dichiarare qui sotto la funzione reverse_array
void reverse_array(char * array, int dim);
char * inverti(char * input, int i, int dim, int j);



int main (int argc, char* argv[]) {
  char input[DIMMAX];
  cout << "Introdurre stringa da invertire: ";
  cin >> input;
  cout << strlen(input)<<endl;
  // Assumiamo che sia sempre strlen(input) < DIMMAX
  reverse_array(input, strlen(input));
  cout << "Array invertito: " << input << endl;
  return 0;
}

// Definire qui sotto la funzione reverse_array
void reverse_array(char * input, int dim){
  char output[DIMMAX];
  input = inverti(input,0,dim,dim-1);
}

char * inverti(char * input, int i, int dim, int j){

  cout << input[j]<<endl;
  if (i<=j) {
      if (input[i]=='a'||input[i]=='e'||input[i]=='i'||
      input[i]=='o'||input[i]=='u') {
        input[i]=SEGNAPOSTO;
      }
      else{
        input[i]=input[i];
      }
      if (input[j]=='a'||input[j]=='e'||input[j]=='i'||
      input[j]=='o'||input[j]=='u') {
        input[j]=SEGNAPOSTO;
      }
      else{
        input[j]=input[j];
      }

      swap(input[i],input[j]);

      i++;
      j--;
      inverti(input,i,dim,j);
  }
  else{
    return input;
  }
}

void swap(char a, char b){
  char tmp = a;
  a = b;
  b = tmp;
}
