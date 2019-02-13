using namespace std;
#include <iostream>
#include "queue.h"


void init (queue &q){
  q.head = NULL;
}

static retval empt(const queue &q){
  return (q.head == NULL)? OK:FAIL;
}

void deinit (queue &s){
  while (!empt(s)) {
    dequeue(s);
  }
}

retval enqueue(int val,queue &q){
  node * np = new (nothrow) node;
  if (np==NULL) {
    return FAIL;
  }
  else{
    np->val = val;
    np->next = NULL;
    if (empt(q)) {
      q.head = np;
    }
    else{
      q.tail -> next = np;
    }
    q.tail = np;
    return OK;
  }

retval first(int &out,const queue &q){
  if (empt(q)) {
    return FAIL;
  }
  else{
    out = q.head -> val;
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
  if (!empt(q)) {
    node * first = q.head;
    while (first!=NULL) {
      cout << first->val << " ";
      first=first->next;
    }
  }
}
