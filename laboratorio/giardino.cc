using namespace std;
#include <iostream>
#include <stdlib.h>

#include "giardino.h"


Albero *** preparaGiardino(int dimX, int dimY)
{
  Albero *** matrice;
  matrice = new Albero **[dimX];

  for(int i=0; i<dimX; i++){
      matrice[i]=new Albero*[dimY];
  }
  for (int i = 0; i < dimX; i++) {
    for (int j = 0; j < dimY; j++) {
        matrice[i][j]=NULL;
    }
  }
  return matrice;
}

void riempiGiardino(Albero ***giardino, int dimX, int dimY,int *quanti)
{
  int randx, randy;
  /* initialize random seed: */
  srand (time(NULL));

  for (int i = 0; i < quanti[0]; i++) {
    randx = rand() % dimX;
    randy = rand() % dimY;

    Albero * tmp = new Albero;
    tmp->nome_specie=ABETE;
    tmp->numero_identificativo=i;
    giardino[randx][randy]= tmp;
  }

  for (int i = 0; i < quanti[1]; i++) {
    randx = rand() % dimX;
    randy = rand() % dimY;

    if(giardino[randx][randy]== NULL){
    Albero * tmp = new Albero;
    tmp->nome_specie=PINO;
    tmp->numero_identificativo=i;
    giardino[randx][randy]= tmp;
  }
  else{
    i--;
  }
  }

  for (int i = 0; i < quanti[2]; i++) {
    randx = rand() % dimX;
    randy = rand() % dimY;

    if(giardino[randx][randy]== NULL){

    Albero * tmp = new Albero;
    tmp->nome_specie=QUERCIA;
    tmp->numero_identificativo=i;
    giardino[randx][randy]= tmp;
  }
  else{
    i--;
  }
  }

  for (int i = 0; i < quanti[3]; i++) {
    randx = rand() % dimX;
    randy = rand() % dimY;
    if(giardino[randx][randy]== NULL){
    Albero * tmp = new Albero;
    tmp->nome_specie=FAGGIO;
    tmp->numero_identificativo=i;
    giardino[randx][randy]= tmp;
  }
  else{
    i--;
  }
  }

  for (int i = 0; i < quanti[4]; i++) {
    randx = rand() % dimX;
    randy = rand() % dimY;

    if(giardino[randx][randy]== NULL){
    Albero * tmp = new Albero;
    tmp->nome_specie=SALICE;
    tmp->numero_identificativo=i;
    giardino[randx][randy]= tmp;
  }
  else{
    i--;
  }
  }

  for (int i = 0; i < dimX; i++) {
    for (int j = 0; j < dimY; j++) {
      if (giardino[i][j]!=NULL) {
        cout << giardino[i][j] -> numero_identificativo<< "\t";
      }
      else{
        cout << "-\t";
      }
    }
    cout << endl;
  }
}
