#ifndef STRUCT_QUEUE_H
#define STRUCT_QUEUE_H

// dichiarazioni per la gestione della coda di interi

using namespace std;
#include <iostream>

struct node {
int val;
node * next;
};

struct queue 
{
  node * tail;
  node * head;
};

enum retval { FAIL, OK };
enum boolean { FALSE, TRUE };

void init (queue &);
retval enqueue(int,queue &);
retval dequeue(int &,queue &);
void print (const queue &);

#endif



