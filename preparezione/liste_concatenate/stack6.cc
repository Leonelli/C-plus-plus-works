#include "struct_stack.h"
#include <iostream>
using namespace std;

void init(stack & s){
  s=NULL;
}

static bool empt(const stack &s){
  return (s==NULL);
}

void deinit(stack & s){
  while (!empt(s)) {
    pop(s);
  }
}

retval push (int val, stack &s){
  nodo * np = new (nothrow) nodo;
  if (np==NULL) {
    return FAIL;
  }
  else{
    np->val = val;
    np->next = s;
    s=np;
    return OK;
  }
}

retval top (int &out, const stack &s){
  if (empt(s)) {
    return FAIL;
  }
  else{
    out = s->val;
    return OK;
  }
}
retval pop (stack &s){
  if (empt(s)) {
    return FAIL;
  }
  else{
    nodo * first = s;
    s = s->next;
    delete first;
    return OK;
  }
}

void print(const stack &s){
  nodo * first = s;
  while (first!=NULL) {
    cout << first->val << " ";
    first=first->next;
  }
}
