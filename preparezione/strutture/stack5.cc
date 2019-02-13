using namespace std;
#include "stack.h"
#include <iostream>


void init(stack &s ){
  s.indice=0;
  s.elem= new int [dim];
}

static bool empt(const stack &s){
  return (s.indice==0);
}

static bool ful(const stack &s){
  return (s.indice==dim);
}


void deinit(stack & s){
  delete [] s.elem;
}
retval push (int val, stack &s){
  if (ful(s)) {
    return FAIL;
  }
  else{
    s.elem[s.indice]=val;
    s.indice++;
    return OK;
  }
}

retval top (int & out, const stack &s){
  if (empt(s)) {
    return FAIL;
  }
  else{
    out = s.elem[s.indice-1];//
    return OK;
  }
}
retval pop (stack &s){
  if (empt(s)) {
    return FAIL;
  }
  else{
    s.indice--;
    return OK;
  }
}

void print(const stack &s){
  if (!empt(s)) {
    for (int i = 0; i < s.indice; i++) {
      cout << s.elem[i]<< " ";
    }
  }
}
