using namespace std;
#include <iostream>

const int MAX_PRIMI = 100;
const int CENTO_PRIMI[MAX_PRIMI] =
{ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
31, 37, 41, 43, 47, 53, 59, 61, 67, 71,
73, 79, 83, 89, 97, 101, 103, 107, 109, 113,
127, 131, 137, 139, 149, 151, 157, 163, 167, 173,
179, 181, 191, 193, 197, 199, 211, 223, 227, 229,
233, 239, 241, 251, 257, 263, 269, 271, 277, 281,
283, 293, 307, 311, 313, 317, 331, 337, 347, 349,
353, 359, 367, 373, 379, 383, 389, 397, 401, 409,
419, 421, 431, 433, 439, 443, 449, 457, 461, 463,
467, 479, 487, 491, 499, 503, 509, 521, 523, 541};

int primo(int n);
int contiene(int n,int i,int max);
//restituisce “1” se n e’ un elemento dell’array;
//restituisce “0” se n non e’ un elemento dell’array ma e’ multiplo di un elemento dell’array;
//restituisce “-1” altrimenti.


int main(){
  int n=-1;
  while (n<1) {
    cout << "Inscisci un valore: ";
    cin >> n;
  }
  cout << primo(n)<<endl;
  return 0;
}

int primo(int n){
  return contiene(n,0,MAX_PRIMI);
}

int contiene(int n,int i,int max){
  if (n==CENTO_PRIMI[i]) {
    return 1;
  }
  else if(((n/CENTO_PRIMI[i])>0) && ((n%CENTO_PRIMI[i])==0)){
    return 0;
  }
    else if(i>max){
        return -1;
    }
    else{
      i++;
      return contiene(n, i, max);
    }
}
