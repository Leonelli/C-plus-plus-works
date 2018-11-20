#include "struct_queue.h"

static int next(int index) 
{
  return (index+1)%dim;
}

/* 
// Implementazione statica 
void init(queue & q) 
{
  q.tail=q.head=0;
}
*/

// Implementazione dinamica
void init(queue & q) 
{
  q.tail=q.head=0;
  q.elem = new int[dim];
}


/* 
// Implementazione statica 
void deinit(queue & q) 
{
}
*/

// Implementazione statica 
void deinit(queue & q) 
{
  delete [] q.elem;
}

static bool emptyp(const queue & q) 
{
  return (q.tail==q.head);
}

static bool fullp(const queue & q)
{
  return (next(q.tail)==q.head);
}

retval enqueue (int n,queue & q) 
{ 
  retval res;
  if (fullp(q)) 
    res = FAIL;
  else {
    q.elem[q.tail] = n;
    q.tail = next(q.tail);
    res=OK;
  }
  return res;
}

retval first(int & n,const queue & q) 
{ 
  retval res;
  if (emptyp(q)) 
    res = FAIL;
  else {
    n = q.elem[q.head];
    res=OK;
  }
  return res;
}

retval dequeue(queue & q) 
{ 
  retval res;
  if (emptyp(q)) 
    res = FAIL;
  else {
    q.head = next(q.head);
    res=OK;
  }
  return res;
}


void print (const queue & q) 
{
  int i;
  for (i=q.head;i!=q.tail;i=next(i)) 
    cout << q.elem[i] << " ";
  cout << endl;
}
