using namespace std;
#include <iostream>
#include "queue.h"


static retval empt(const queue &q){
  return (q.head==NULL) ? OK : FAIL ;
}

void init (queue &q){
  q.head = NULL;
}
void deinit (queue &q){
  while (!empt(q)) {
    dequeue(q);
  }
}

retval enqueue(int val,queue &q){
  node * n = new (nothrow) node;
  if (n==NULL) {
      return FAIL;
  }
  else{
      n->val = val;
      n->next = NULL;
      if (empt(q)) {
        q.head = n;
      }
      else{
        q.tail -> next = n;
      }
      q.tail = n;
      return OK;
  }
}

retval first(int &val,const queue &q){
  if (empt(q)) {
    return FAIL;
  }
  else{
    val = q.head->val;
    return OK;
  }
}

retval dequeue(queue &q){
  if (empt(q)) {
    return FAIL;
  }
  else{
    node * first = q.head;
    q.head = q.head->next;
    delete first;
    return OK;
  }
}

void print (const queue &q){
  node * first = q.head;
  while (first!=NULL) {
    cout << first->val << " ";
    first = first->next;
  }
  cout << endl;
}
