#include "entry.h"
#include "stack.h"

static void Cancella()
{
  for (int i=0;i<100;i++)
    cout << '\n';
}

int calcolatore () 
{
  entry e,op1,op2;
  retval res;
  
  init();
  while (1) {
    print();
    res=read_entry(e);
    if (res==FAIL) {
      Cancella();
      cout << "!!! Tipo di dato errato !!!\n";
    }
    // NUMBER 
    else if (!operatorp(e)) { 
      res=push(e);
      Cancella();
      if (res==FAIL) {
        cout << "!!! Troppi dati nello stack !!!\n";
      }
    } 
    // OPERATOR
    else if (length()<2) {
      Cancella();
      cout << "!!! Troppo pochi operandi !!!\n";
    }
    else {
      top(op1);
      pop();
      top(op2);
      pop();
      push(calcola(op1,op2,e));
      Cancella();
    }
  }
  return 0;
}

