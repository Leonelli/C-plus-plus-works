  using namespace std;
#include <iostream>

struct stack{
  int index;
  int dim;
  double * elem;
};

enum retval {FAIL,OK};


void init(stack &s,int maxdim);
void deinit(stack &s);
bool push(stack &s, double &out);
bool top(const stack &s, double n);
bool pop(stack &s);
void print(const stack &s);


static bool empt(const &s) {
  return (s.index==0) ? OK : FAIL ;
}

static bool ful(const &s) {
  return (s.index==s.dim) ? OK : FAIL ;
}

void init(stack &s,int maxdim){
  s.index=0;
  s.dim = maxdim;
  s.elem = new double[s.dim];
}

void deinit(stack &s){
  delete[]s.elem;
}

bool push(stack &s, double &out){
  if (ful(s)) {
    return FAIL;
  }
  else{
    s.elem[s.index]=out;
    s.index++;
    return OK;
  }
}

bool top(const stack &s, double n){
  if (empt(s)) {
    return FAIL;
  }
  else{
    n = s.elem[s.index];
    return OK;
  }
}

bool pop(stack &s){
  if (empt(s)) {
    return FAIL;
  }
  else{
    s.index--;
    return OK;
  }
}

void print(const stack &s){
  if (!empt(s)) {
    for (int i = 0; i < s.index; i++) {
      cout << s.elem[i]<< " ";
    }
    cout << endl;
  }
}
