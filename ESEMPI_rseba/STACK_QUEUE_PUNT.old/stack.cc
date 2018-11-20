#include "stack.h"
using namespace std;
#include <iostream>


struct nodo{
  int val;
  nodo *next;
};

static nodo *stack;

static boolean emptyp () {
  return (boolean) (stack == NULL);
}

void init() {
  stack = NULL;
}

retval top (int &n) {
  if (emptyp())
    return FAIL;
  n=stack -> val;
  return OK;
}

retval push (int n) {
  nodo * np = new nodo;
  if (np==NULL) return FAIL;
  np -> val = n;
  np -> next = stack;
  stack = np;
  return OK;
}

retval pop () {
  if (emptyp())
    return FAIL;
  nodo *first = stack;
  stack = stack -> next;
  delete first; 	/* liberare la memoria: cancella
			   l'oggetto puntato da first*/
  return OK;
}

void print () 
{
  nodo *first = stack;
  while (first!=NULL) {
    cout << first->val << endl;
    first = first -> next;
  }
}

    
  





