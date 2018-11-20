#ifndef TREE_H 
#define TREE_H 

/////////////////////////////////////////////////////////////////
// NOTA: utilizza versione "parametrica" sul TIPO del contenuto
// per "parametrizzare" il tipo del contenuto:
/* - ridefinire tipo "contenuto" */
/* - ridefinire tipo "chiave" */
/* - ridefinire funzione "chiaveDi" */
/* - ridefinire funzione "confronta" */
/* - ridefinire tipo "stampa_contenuto" */
/////////////////////////////////////////////////////////////////

#include "persona.h"

typedef persona * contenuto;
typedef char * chiave;

// ---------- MODO RICERCA (PER NOME O COGMOME) ----- 
typedef enum {NOME,COGNOME}  modo;
extern modo modalita;

static chiave chiaveDi(contenuto v) {
  if (modalita==COGNOME) 
    return v->cognome;
  else
    return v->nome;    
}

// restituisce rispettivamente -1,0,1 
// se v1 e' piu' piccolo, uguale o piu' grande di v2
static int confronta(chiave c,contenuto v1) {
  if (modalita==COGNOME) 
    return strcmp(c,v1->cognome);
  else
    return strcmp(c,v1->nome);
}

static void stampa_contenuto(const contenuto & v) {
  stampa_persona(v);
}


/////////////////////////////////////////////////////////////////

enum retval {FAIL,OK};

struct node;

typedef node * tree;

struct node 
{  
  contenuto item;  
  tree left;  
  tree right;
};

void init(tree &);
bool nullp(const tree & );
retval insert(tree &, contenuto);
tree cerca (const tree &,chiave);
void print_ordered(const tree &);


#endif
