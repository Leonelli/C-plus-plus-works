using namespace std;
#include <iostream>

#include "struct_stack.h"


static boolean emptyp (const stack & s) {
  return (boolean) (s == NULL);
}

void init(stack & s) {
  s = NULL;
}

retval top (int &n,const stack & s) {
  retval res;
  if (emptyp(s))
    res=FAIL;
  else {
    n=s -> val;
    res=OK;
  }
  return res;
}

  //  NOTA: se si vuole gestire il caso stack pieno, 
  //  usare set_new_handler
  // "new" non restituisce piu' "NULL" in caso di fallimento
retval push (int n,stack & s) {
  nodo * np = new nodo;
  //  if (np==NULL) return FAIL; // VECCHIO C++
  np -> val = n;
  np -> next = s;
  s = np;
  return OK;
}

retval pop (stack & s) {
  retval res;
  if (emptyp(s))
    res=FAIL;
  else {
    nodo *first = s;
    s = s -> next;
    delete first; 	// liberare la memoria: cancella
    res=OK;             // l'oggetto puntato da first
  }		
  return res;
}

void print (const stack & s) 
{
  nodo *first = s;
  while (first!=NULL) {
    cout << first->val << endl;
    first = first -> next;
  }
}

    
  





