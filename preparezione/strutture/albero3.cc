using namespace std;
#include <iostream>
#include "albero.h"

void inizializza(Albero &t){
  t = NULL;
}

boolean vuoto(const Albero &t){
  return (t==NULL)?VERO:FALSO;
}


boolean inserisci(Albero &t, int val){
  if (vuoto(t)==VERO) {
    t = new (nothrow) Nodo;
    if (t==NULL) {
      return FALSO;
    }
    t->val = val;
    t->sx = t->dx = NULL;
    return VERO;
  }
  else{
    if (val <= t->val) {
      return inserisci(t->sx,val);
    }
    else if (val > t->val) {
      return inserisci(t->dx,val);
    }
  }
}


boolean cerca(const Albero &t, int val){
  if (vuoto(t)==VERO) {
    return FALSO;
  }
  else{
    if (val == t->val) {
      return VERO;
    }
    else if (val<t->val) {
      return cerca(t->sx,val);
    }
    else if (val>t->val) {
      return cerca(t->dx,val);
    }
  }
}

void stampa(const Albero &t){
  if (vuoto(t)==FALSO) {
    stampa(t->sx);
    cout << t->val <<" ";
    stampa(t->dx);
  }
}
