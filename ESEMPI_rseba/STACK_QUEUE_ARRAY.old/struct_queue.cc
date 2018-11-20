#include "struct_queue.h"

static int next(int index) 
{
  return (index+1)%dim;
}

void init(queue & q) 
{
  q.tail=q.head=0;
}

static boolean emptyp(const queue & q) 
{
  return (boolean) (q.tail==q.head);
}

static boolean fullp(const queue & q)
{
  return (boolean) (next(q.tail)==q.head);
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

retval dequeue(int & n,queue & q) 
{ 
  retval res;
  if (emptyp(q)) 
    res = FAIL;
  else {
    n = q.elem[q.head];
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
