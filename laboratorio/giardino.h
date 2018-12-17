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
