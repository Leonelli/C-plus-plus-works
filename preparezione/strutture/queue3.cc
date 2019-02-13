using namespace std;
#include <iostream>
#include "queue.h"


static int next(int index , const queue &q){
  return (index+1)%q.dim;
}

static bool empt(const queue &q){
  return (q.head == q.tail);
}

static bool ful(const queue &q){
  return (q.head == next(q.tail,q));
}

void init(queue &q, int maxdim){
  q.head = q.tail =  0;
  q.dim = maxdim+1;
  q.elem= new float [q.dim];
}

void deinit(queue &q){
  delete [] q.elem;
}

bool enqueue(queue &q, float n){
  if (ful(q)) {
    return false;
  }
  else{
    q.elem[q.tail]=n;
    q.tail = next(q.tail,q);
    return true;
  }
}

bool dequeue(queue &q){
  if (empt(q)) {
    return false;
  }
  else{
    q.head = next(q.head,q);
    return true;
  }
}

bool first(queue &q, float &out){
  if (empt(q)) {
    return false;
  }
  else{
    out = q.elem[q.head];
    return true;
  }
}

void print(const queue &q){
  if (!empt(q)) {
    for (int i = q.head; i != q.tail ; i=next(i,q)) {
      cout<<q.elem[i]<<" ";
    }
  }
}
