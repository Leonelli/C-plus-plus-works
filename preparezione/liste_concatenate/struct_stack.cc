using namespace std;
#include <iostream>
#include "struct_stack.h"

//enum retval {FAIL,OK};

/*struct nodo{
  int val;
  nodo *next;
};*/

//typedef nodo * stack ;



static retval empt(const stack &s){
  return (s==NULL) ? OK : FAIL;
}


void init(stack & s){
  s=NULL;
}
void deinit(stack & s){
  while (!empt(s)) {
    pop(s);
  }
}


retval push (int n, stack &s){
  nodo * np = new (nothrow) nodo;
  if (np==NULL) {
    return FAIL;
  }
  else{
    np->val=n;
    np->next = s;
    s = np;
    return OK;
  }

}

retval top (int &n, const stack &s){
  if (!empt(s)) {
    n=s->val;
    return OK;
  }
  else{
    return FAIL;
  }
}
retval pop (stack &s){
    if (empt(s)) {
      return FAIL;
    }
    else{
      nodo * first = s;
      s = s -> next;
      delete first;
      return OK;
    }
}

void print(const stack &s){
  nodo * first = s;
  while (first != NULL) {
    cout << first -> val << " ";
    first = first -> next;
  }
}
