using namespace std;
#include <iostream>
#include <stdlib.h>


const int NUMERO_SPECIE=5;
enum Specie {ABETE, PINO ,QUERCIA, FAGGIO, SALICE};
struct  Albero {
    Specie nome_specie;
    int numero_identificativo;
  };

Albero *** preparaGiardino(int dimX, int dimY);
void riempiGiardino(Albero ***giardino, int dimX, int dimY,int *quanti);



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
    randx = rand() % dimX + 1;
    randy = rand() % dimY + 1;

    Albero * tmp = new Albero;
    tmp->nome_specie=ABETE;
    tmp->numero_identificativo=i;
    giardino[randx][randy]= tmp;
  }

  for (int i = 0; i < quanti[1]; i++) {
    randx = rand() % dimX + 1;
    randy = rand() % dimY + 1;

    Albero * tmp = new Albero;
    tmp->nome_specie=PINO;
    tmp->numero_identificativo=i;
    giardino[randx][randy]= tmp;
  }

  for (int i = 0; i < quanti[2]; i++) {
    randx = rand() % dimX + 1;
    randy = rand() % dimY + 1;

    Albero * tmp = new Albero;
    tmp->nome_specie=QUERCIA;
    tmp->numero_identificativo=i;
    giardino[randx][randy]= tmp;
  }

  for (int i = 0; i < quanti[3]; i++) {
    randx = rand() % dimX + 1;
    randy = rand() % dimY + 1;

    Albero * tmp = new Albero;
    tmp->nome_specie=FAGGIO;
    tmp->numero_identificativo=i;
    giardino[randx][randy]= tmp;
  }

  for (int i = 0; i < quanti[4]; i++) {
    randx = rand() % dimX + 1;
    randy = rand() % dimY + 1;

    //if(giardino[randx][randy]!=NULL){
      Albero * tmp = new Albero;
      tmp->nome_specie=SALICE;
      tmp->numero_identificativo=i;
      giardino[randx][randy]= tmp;
    //}
    //else{
    //  i--;
    //}
  }

  for (int i = 0; i < dimX; i++) {
    for (int j = 0; j < dimY; j++) {
      if (giardino[i][j]!=NULL) {
        cout << giardino[i][j] -> nome_specie<< "\t";
      }
      /*else{
        cout << "/t";
      }*/
    }
    cout << endl;
  }
}
