#ifndef STACK_H
#define STACK_H

using namespace std;
#include <iostream>

enum retval {FAIL,OK};
enum boolean {FALSE,TRUE};

void init();
retval push (int);
retval top (int &);
retval pop ();
void print();


#endif
