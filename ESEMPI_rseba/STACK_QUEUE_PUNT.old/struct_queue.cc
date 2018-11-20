using namespace std;
#include <iostream>

#include "struct_queue.h"


static boolean emptyp (const queue & Q) 
{
  return (boolean) (Q.head == NULL);
}

void init(queue & Q)
{
  Q.head = Q.tail = NULL;
}

  //  NOTA: se si vuole gestire il caso coda piena, 
  //  usare set_new_handler
  // "new" non restituisce piu' "NULL" in caso di fallimento
retval enqueue(int n,queue & Q)
{
  node * np = new node;
  np->val=n;
  np->next=NULL;
  if (emptyp(Q)) 
    Q.head=Q.tail=np;
  else {
    Q.tail->next=np;
    Q.tail=np;
  }
  return OK;
}

retval dequeue(int &n,queue & Q)
{ 
  node * first;
  retval res;
  if (emptyp(Q))
    res=FAIL;
  else {
    first = Q.head;
    n = first->val;
    Q.head = Q.head->next;
    delete first; 
    if (emptyp(Q)) 
      Q.tail = NULL;
    res=OK;
  }
  return res;
}

void print(const queue & Q) 
{ 
  if (!emptyp(Q)) {
    node * first=Q.head;
    do {
      cout << first->val << endl;
      first = first->next;
    } while (first != NULL);
  }
}

