using namespace std;
#include <iostream>
// #include "queue.h"

struct node {
    long val;
    node *next;
};
  struct queue {
    node *head;
    node *tail;
  };
  enum retval {FALSE = 0, TRUE = 1};

void   init    (queue &q);
retval enqueue (queue &q, long val);
retval dequeue (queue &q);
retval empty(const queue &q);
retval first(const queue &q, long &result);
void print(const queue &q);


void   init    (queue &q){
  q.head = NULL;
}

retval enqueue (queue &q, long val){
  node * n = new nodo;
  if (n==NULL) {
    return false;
  }
  else{
    n->val = val;
    n-> next = NULL;
    if (empty(q)) {
      q.tail = q.head = n;
    }
    else{
      q.tail->next = n;
      q.tail = n;
    }
    return true;
  }
}

retval dequeue (queue &q){
  node *first;
  if (!empty(q)) {
    first=q.head;
    q.head = q.head->next;
    return true;
  }
  else{
    return false;
  }
}


retval empty(const queue &q){
  return (q.head=NULL)?TRUE:FALSE;
}

retval first(const queue &q, long &result){
  if (empty(q)) {
    return FALSE;
  }
  else{
    result = q.head->val;
    return true;
  }
}

void print(const queue &q){
  Nodo *n =q.head;
  while (n!=NULL) {
    cout << n.val << " ";
    n=n->next;
  }
  cout << endl;
}
