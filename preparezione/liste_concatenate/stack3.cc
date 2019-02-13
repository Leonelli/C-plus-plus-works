using namespace std;
#include <iostream>
#include "struct_stack.h"

void init(stack & s){
  s = NULL;
}

static retval empt(const stack &s){
  return (s==NULL) ? OK : FAIL;
}

void deinit(stack & s){
  while (!empt(s)) {
    pop(s);
  }
}

retval push (int val, stack & s){
  nodo * n = new (nothrow) nodo;
  if (n==NULL) {
    return FAIL;
  }
  else{
    n->val = val;
    n->next = s;
    s = n;
    return OK;
  }
}

retval top (int & val, const stack &s){
  nodo * first = s;
  if (empt(s)) {
    return FAIL;
  }
  else{
    val=first->val;
    return OK;
  }
}

retval pop (stack & s){
  if (empt(s)) {
    return FAIL;
  }
  else{
    nodo * first = s;
    s=s->next;
    delete first;
    return OK;
  }
}

void print(const stack & s){
  nodo * first = s;
  while (!empt(first)) {
    cout << first->val <<" ";
    first=first->next;
  }
}
