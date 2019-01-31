using namespace std;
#include <iostream>
#include "queue.h"


static bool is_empt(const queue &q)
{
    return q.tail == q.head;
}

static int next(int index, const queue &q){
  return(index+1)%q.dim;
}

static bool is_full(const queue &q){
  return next(q.tail,q) == q.head;
}



void init(queue &q, int maxdim){
  q.head = q.tail = 0;
  q.dim = maxdim+1;
  q.elem = new float [q.dim];
}
void deinit(queue &q){
  delete [] q.elem;
}

bool enqueue(queue &q, float n){
  bool res = false;
  if (!is_full(q)) {
    q.elem[q.tail]=n;
    q.tail= next(q.tail,q);
    res = true;
  }
  return res;
}

bool dequeue(queue &q){
  bool res = false;
  if (!is_empt(q)) {
    q.head = next(q.head,q);
    res = true;
  }
  return res;
}

bool first(queue &q, float &out){
  bool res = false;
  if (!is_empt(q)) {
    out = q.elem[q.head];
    res = true;
  }
  return res;
}

void print(const queue &q){
  for (int i = q.head; i != q.tail; i = next(i,q)) {
    cout << q.elem[i];
  }
  cout << endl;
}
