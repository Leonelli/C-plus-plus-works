using namespace std;
#include "albero.h"
#include <iostream>

void inizializza(Albero &t){
  t=NULL;
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
    else{
      t->val = val;
      t->sx = t->sx = NULL;
      return VERO;
    }
  }
  if (val>=t->val) {
    return inserisci(t->dx,val);
  }
  else if(val<t->val){
    return inserisci(t->sx,val);
  }
}

boolean cerca(const Albero &t, int val){
  if (vuoto(t)==VERO) {
    return FALSO;
  }
  else{
    if (t->val == val) {
      return VERO;
    }
    else if (val < t->val) {
      return cerca(t->sx,val);
    }
    else if (val > t->val) {
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
