using namespace std;
#include <iostream>
#include "struct_stack.h"


void init(stack &s){
  s=NULL;
}

static retval empt(const stack &s){
    return (s==NULL)? OK : FAIL;
}

void deinit(stack &s ){
  while (!empt(s)) {
    pop(s);
  }
}
retval push (int val, stack &s){
  nodo * first = new (nothrow) nodo;
  if (first==NULL) {
    return FAIL;
  }
  else{
    first->val = val;
    first->next= s;
    s=first;
    return OK;
  }
}
retval top (int & val, const stack &s){
  if (empt(s)) {
    return FAIL;
  }
  else{
    val = s->val;
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
  nodo * n = s;
  while (n!=NULL) {
    cout << n->val<<" ";
    n = n->next;
  }
}
