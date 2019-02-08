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

static retval empt(const queue &q){
  return (q.head == NULL) ? OK:FAIL;
}

void deinit (queue &q){
  while (!empt(q)) {
    dequeue(q);
  }
}
retval enqueue(int n,queue &q){
  node * np = new (nothrow) node;
  if (np==NULL) {
    return FAIL;
  }
  else{
    np->val=n;
    np->next = NULL;
    if (empt(q)) {
      q.head=np;
    }
    else{
      q.tail->next=np;
    }
    q.tail = np;
    return OK;
  }
}
retval first(int &n,const queue &q){
  if (empt(q)) {
    return FAIL;
  }
  else{
    n=q.head->val;
    return OK;
  }
}
retval dequeue(queue &q){
  if (empt(q)) {
    return FAIL;
  }
  else{
    node * first;
    first=q.head;
    q.head = q.head->next;
    delete first;
    return OK;
  }

}

void print (const queue &q){
  if (!empt(q)) {
    node * first=q.head;
    do{
      cout << first->val<<" ";
      first=first->next;
    }while(first!=NULL);
  }
}
