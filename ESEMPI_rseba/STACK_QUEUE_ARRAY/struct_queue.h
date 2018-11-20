#ifndef STRUCT_QUEUE_H
#define STRUCT_QUEUE_H

// dichiarazioni per la gestine della coda di interi

using namespace std;
#include <iostream>

// NOTA: permette di contenere dim-1 elementi
static const int dim = 100;

/* 
// Implementazione statica 
struct queue 
{
  int head, tail;
  int elem[dim];
};
*/

// Implementazione dinamica
struct queue 
{
  int head, tail;
  int * elem;
};

enum retval { FAIL, OK };

void init (queue &);
void deinit (queue &);
retval enqueue(int,queue &);
retval first(int &,const queue &);
retval dequeue(queue &);
void print (const queue &);

#endif



