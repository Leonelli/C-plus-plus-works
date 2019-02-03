using namespace std;
#include <iostream>
#include "stack.h"

/*
struct stack {
  int index;
  int dim;
  double *elem;
};
*/
static bool empty(const stack &s){
  return s.index==0;
}

static bool fully(const stack &s)
{
  return s.index==s.dim;
}
void init(stack &s, int maxdim)
{
  s.index=0;
  s.dim=maxdim;
  s.elem= new double[maxdim];
}

void deinit(stack &s)
{
  delete [] s.elem;
}

bool push(stack &s, double n)
{
  if (fully(s)) {
    return false;
  }
  else{
    //check
    s.elem[s.index++]=n;
    return true;
  }
}

bool top(const stack &s, double &out)
{
  if (empty(s)) {
    return false;
  }
  else{
    out = s.elem[s.index-1];
    return true;
  }
}

bool pop(stack &s)
{
  if (empty(s)) {
    return false;
  }
  else{
    s.index--;
    return true;
  }
}

void print(const stack &s)
{
    for (int i = 0; i < s.index; i++) {
      cout << s.elem[i]<<" ";
    }
    cout << endl;
}
