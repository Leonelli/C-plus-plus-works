#ifndef QUEUE_H
#define QUEUE_H

// dichiarazioni per la gestine della coda di interi

using namespace std;
#include <iostream>

enum retval { FAIL, OK };
enum boolean { FALSE, TRUE };

void init ();
retval enqueue(int);
retval dequeue(int &);
void print ();

#endif




