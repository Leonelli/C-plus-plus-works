using namespace std;
#include <iostream>
#include <cstring>

const char SEGNAPOSTO = '!';
const int DIMMAX = 40;

// Dichiarare qui sotto la funzione reverse_array
void reverse_array(char input[], int lenght);
char * changeLetter(char * input,int i, int lenght, char * output);
void swap(char &a, char &b);

int main (int argc, char* argv[]) {
char input[DIMMAX];
cout << "Introdurre stringa da invertire: ";
cin >> input;
// Assumiamo che sia sempre strlen(input) < DIMMAX
reverse_array(input, strlen(input));
cout << "Array invertito: " << input << endl;
return 0;
}


// Definire qui sotto la funzione reverse_array
void reverse_array(char input[], int lenght){
  char output[DIMMAX];
  input=changeLetter(input,0,lenght,output);
}

char * changeLetter(char * input,int i, int lenght, char * output){
    if (i<lenght-1-i) {
      cout << "input[5]: "<<input[5]<<endl;
      cout <<"lenght-1-i: " << lenght-1-i<<"\t i: "<<i<<endl;
      swap(input[lenght-1-i],input[i]);
        if (input[i]=='a'||input[i]=='e'||input[i]=='i'||input[i]=='o'||input[i]=='u') {
          input[i]=SEGNAPOSTO;
        }
        if (input[lenght-1-i]=='a'||input[lenght-1-i]=='e'||input[lenght-1-i]=='i'||input[lenght-1-i]=='o'||input[lenght-1-i]=='u') {
          input[lenght-1-i]=SEGNAPOSTO;
        }
      i++;
      changeLetter(input,i,lenght,output);
  }
  else{
    return input;
  }
}

void swap(char &a, char &b){
  char tmp = a;
  a=b;
  b=tmp;
}
