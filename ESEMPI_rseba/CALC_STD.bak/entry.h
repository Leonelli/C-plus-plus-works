#ifndef ENTRY_H
#define ENTRY_H

using namespace std;
#include <iostream>

#include <cstdlib>
#include <cstring>
#include <cerrno>
#include <ctype.h>


const int MaxDim = 20;

enum EntryType {OPERATOR,NUM,NAME,OPEN,CLOSE};
enum Operator {PLUS, MINUS, TIMES, DIVIDE};

enum retval {FAIL,OK};

struct entry 
{
  EntryType  type;
  Operator op;
  char name[MaxDim];
  double num;
};


bool operatorp (const entry &);
bool openp (const entry &);
bool closep (const entry &);
bool nump (const entry &);
bool namep (const entry &);

void print_entry (const entry &);
retval read_entry (entry &);

double apply_operator(const entry &, const entry & e2, const entry & op);

#endif

