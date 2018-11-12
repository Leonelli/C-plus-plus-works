using namespace std;
#include <iostream>
#include <cmath>

//DICHIARAZIONE FUNIONE specigicando nome,paramentri, valore restituito


int fibonacci2(int numero);
int asterisco(int numero);
int asteriscoCapo(int numero);
int asteriscoDiagonale(int numero);
int asteriscoDiagonaleContraria(int numero);
int massimo(int,int);
int mcm(int, int);

int main() {
  /*int limite;
  cout << "Inserisci un numero di elementi: ";
  cin >> limite;
  fibonacci2(limite);*/
  //chidere se si vuole stampare asterishi in orizzonatale, verticale, obliquo destro o sinistro e li stampa a video
  /*int scelta;
  int numero;
  cout << "Insceisci un numero intero di asterischi da stampare: ";
  cin >> numero;
  cout << "1: asterishi in orizzonatale"<<endl;
  cout << "2: asterishi in vericale"<<endl;
  cout << "3: asterishi in obliquo destro"<<endl;
  cout << "4: asterishi in obliquo sinistro"<<endl;
  cout << "Come vuoi stampare: ";
  cin >> scelta;
  switch (scelta) {
    case 1: asterisco(numero);
      break;
    case 2: asteriscoCapo(numero);
      break;
    case 3: asteriscoDiagonale(numero);
      break;
    case 4: asteriscoDiagonaleContraria(numero);
      break;int mcm(int n1, int n2)
    default:
      cout<<"Non hai insetito una scelta corretta" << endl;
  }*/

  /*int n1,n2,max;
  cout << "Inserire un reale: ";
  cin >> n1;
  cout << "Inserire un reale: ";
  cin >> n2;
  max = massimo(n1,n2);
  cout << "Il massimo è: " <<max <<endl;*/

  int n1,n2,mincommult;
  cout << "Inserire un reale: ";
  cin >> n1;
  cout << "Inserire un reale: ";
  cin >> n2;
  mincommult = mcm(n1,n2);
  cout << "Il mcm è: " <<mincommult <<endl;
  return 0;
}

//DEFINIZIONE FUNZIONE
  int fibonacci2(int numero){
  long int somma,ultimo,penultimo;
  if (numero>0)
    {
      cout <<"1 ";
      if (numero>1)
	     {
	  cout <<"1 ";
	  if (numero >2)
	    {
	      ultimo=1;
	      penultimo=1;
	      for(int i=2;i<numero;i++)
		{
		  somma=ultimo+penultimo;
		  penultimo=ultimo;
		  ultimo=somma;
		}
	    }
	}
    }
  return (0);
}


//Stampa n * a video e torna a capo
// n numero intero acquisto da tastiera
int asterisco(int numero){

  for (int i = 0; i < numero; i++) {
    cout << "* ";
  }
  cout << endl;
  return 0;
}

//stampa n asterischi a video uno sotto l'altro
int asteriscoCapo(int numero){

  for (int i = 0; i < numero; i++) {
    cout << "* "<< endl;
  }
  return 0;
}

int asteriscoDiagonale(int numero){


  for (int i = 0; i < numero; i++) {
    for (int j=0; j < i; j++) {
      cout << "- ";
    }
    cout << "* "<< endl;
  }
  return 0;
}

int asteriscoDiagonaleContraria(int numero){

  for (int i = numero; i > 0; i--) {
    for (int j=i-1; j > 0; j--) {
      cout << "- ";
    }
    cout << "* "<< endl;
  }
  return 0;
}

//acquisire da tastiera due numeri interi,
//dichiara e definisce una funzione chiamata
//massimo che prende in input due numeri e
//RESTITUISCE il massimo tra questi due
int massimo(int n1, int n2){
  int max=0;
  if (n1>n2) {
    max=n1;
  }
  else{
    max=n2;
  }
  return max;
}


//acquisire da tastiera due numeri interi,
//calcolare il minimo comune multiplo di qusti due interi attraverso una funzione
//che prende in input due interi e restituisce il minimo comune multiplo
//il minimo comune multiplo è il numero più piccolo che è mulitplo di tutti e due i numeri senza resto
int mcm(int n1, int n2){

  int mincommult = n1*n2;
  if (n1%n2==0 ) {
    return n1;
  }
  else if(n2%n1==0){
    return n2;
  }
  int candidato= mincommult
  else{
    for (int i = mincommult ; i >= 0; i--) {
    cout <<n1<<" " << n2 <<" " << i << endl;
      if (i%n1==0 && i%n2==0) {
        candidato = i;
      }
    }
  }
  return 0;
}

int mcmProf(int a, int b){
  int candidato,i;

   candidato=a*b;
   i = candidato;
   max = massimo(a,b);
   while (i>max) {
     if ((i%a==0) && (i%b==0)) {
       candidato = i;
     }
     i--;
   }
   return candidato;
}
