using namespace std;
#include <iostream>
#include <stdlib.h>
#include "giardino.h"



int main (int argc ,char * argv[])
{
  Albero *** giardino;
  int quanti[NUMERO_SPECIE]= {3,1,2,1,3};
  int dimX,dimY;

  if(argc!=3)
  {
    cerr << "Inserisci 3 elementi! <./a.out dimX dimY> "<<endl;
    exit(-1);
  }
  if(atoi(argv[1]) < 9 || atoi(argv[2]) < 9)
  {
    cerr << "Errore, dimensioni inferiori a 9!"<<endl;
    exit(-2);
  }

  dimX=atoi(argv[1]);
  dimY=atoi(argv[2]);
  clog << "dimX: " <<dimX << " dimY: " <<dimY << endl;

  //alloco la matrice dinamicamente
  giardino = preparaGiardino(dimX,dimY);
  riempiGiardino(giardino,dimX,dimY, quanti);
  return 0;
}
