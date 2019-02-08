using namespace std;
#include <iostream>

struct stack{
  int index;
  int dim;
  double * elem;
};

void init(stack &s,int maxdim);
void deinit(stack &s);
bool push(stack &s, double &out);
bool top(const stack &s, double n);
bool pop(stack &s);
void print(const stack &s);

static bool empt(const stack &s){
  return (s.index == 0) ? true:false;
}

static bool ful(const stack &s){
  return (s.dim == s.index) ? true : false;
}

void init(stack &s,int maxdim){
  s.index=0;
  s.dim=maxdim;
  s.elem = new double [s.dim];
}
void deinit(stack &s){
  delete [] s.elem;
}
bool push(stack &s, double &out){
  if (ful(s)) {
    return false;
  }
  else{
    s.elem[s.index++]=out;
    return true;
  }
}
bool top(const stack &s, double n){
  if (empt(s)) {
    return false;
  }
  else{
    n = s.elem[s.index-1];//CHECK!!!
    return true;
  }
}
bool pop(stack &s){
  if (empt(s)) {
    return false;
  }
  else{
    s.index--;
    return true;
  }
}
void print(const stack &s){
  if (!empt(s)) {
  }
    for (int i = 0; i < s.index; i++) {
        cout << s.elem[i] << " ";
    }
    cout << endl;
}
