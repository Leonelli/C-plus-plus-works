#include "queue.h"

static const int dim = 4;
static int head, tail, elem[dim];

static int next(int index) 
{
  return (index+1)%dim;
}

void init() 
{
  tail=head=0;
}

static boolean emptyp() 
{
  return (boolean) (tail==head);
}

static boolean fullp()
{
  return (boolean) (next(tail)==head);
}

retval enqueue (int n) 
{ 
  retval res;
  if (fullp()) 
    res = FAIL;
  else {
    elem[tail] = n;
    tail = next(tail);
    res=OK;
  }
  return res;
}

retval dequeue(int & n) 
{ 
  retval res;
  if (emptyp()) 
    res = FAIL;
  else {
    n = elem[head];
    head = next(head);
    res=OK;
  }
  return res;
}

void print () 
{
  int i;
  for (i=head;i!=tail;i=next(i)) 
    cout << elem[i] << " ";
  cout << endl;
}

      
      
    
   
