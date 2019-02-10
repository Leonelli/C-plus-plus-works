using namespace std;
#include <iostream>
#include "queue.h"

/*
struct node {
int val;
node * next;
};

struct queue
{
  node * tail;
  node * head;
};
*/


//enum retval { FAIL, OK };

void init (queue &q){
  q.head=NULL;
}

static retval empt (const queue &q){
  return (q.head == NULL) ? OK : FAIL;
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
      q.tail->next = n;
    }
    q.tail = n;
    return OK;
  }
}



retval first(int & n,const queue &q){
  if (!empt(q)) {
    n = q.head -> val;
    return OK;
  }
  else{
    return FAIL;
  }
}

retval dequeue(queue &q){
  if (empt(q)) {
    return FAIL;
  }
  else{
    node * n = q.head;
    q.head = q.head -> next;
    delete n;
    return OK;
  }
}


void print (const queue &q){
  node * n = q.head;
  while (n!=NULL) {
    cout << n->val << " ";
    n = n->next;
  }
  cout << endl;
}
