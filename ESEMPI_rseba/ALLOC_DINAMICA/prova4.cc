using namespace std;
#include <iostream>
#include <cstdlib>
#include <new>
#include <cstring>
 
void nomemory() 
{
  cerr << "Memoria esaurita: " 
       << "impossibile allocare " << endl;
  exit(0);
}

int main () 
{
  const int mymax = 1024*1024*1024;
  set_new_handler(nomemory);

  for (int i=0;i<15;i++) {
    char * p = new char [mymax];
    for (int j=0;j<mymax/1024;j++) // "utilizzo" l'array p
       p[j*1024]=0;    
    cout << "i= " << i << endl;
    //    delete[] p;
  }
}

