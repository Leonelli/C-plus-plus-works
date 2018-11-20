using namespace std;
#include <iostream>
#include "queue.h"

struct node {
int val;
node * next;
};

struct queue 
{
  node * tail;
  node * head;
};

static queue Q;


static boolean emptyp () 
{
  return (boolean) (Q.head == NULL);
}

void init()
{
  Q.head = Q.tail = NULL;
}

retval enqueue(int n)
{
  node * np = new node;
  if (np==NULL)
    return FAIL;
  np->val=n;
  np->next=NULL;
  if (emptyp()) 
    Q.head=Q.tail=np;
  else {
    Q.tail->next=np;
    Q.tail=np;
  }
  return OK;
}

retval dequeue(int &n)
{ 
  node * first;
  if (emptyp())
    return FAIL;
  first = Q.head;
  n = first->val;
  Q.head = Q.head->next;
  delete first; 
  if (emptyp()) 
    Q.tail = NULL;
  return OK;
}

void print() 
{ 
  if (!emptyp()) {
    node * first=Q.head;
    do {
      cout << first->val << endl;
      first = first->next;
    } while (first != NULL);
  }
}

