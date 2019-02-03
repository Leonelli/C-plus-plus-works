#include "stdio.h"

void Init (void) {
FILE *pfin;
FILE *pfout;
char Str[100];
char car;
char i,j,x;
char mail[80];
char PossibileMail;

  pfin=fopen ("in","r");
  pfout=fopen ("mail.txt","w");
  printf("\nfile aperto\n");
  i=0;
  j=0;
  PossibileMail=0;
  do {
    car=fgetc(pfin);
    switch (PossibileMail) {
      case 0: if (car == '@') {
                PossibileMail=1;
              }
              break;
      case 1: if (car == '.') {
                PossibileMail=2;
              }
              break;
      case 2: if ((car == ' ') || (car == EOF) || (car == 0x0d)) {
                for (x=0; x<j; x++){
//                  fputc(mail[x],pfout);
//                fputc('\n',pfout);
                  printf("scrivo file\n");
                }
                PossibileMail=0;
                j=0;
              }
              break;
    }
    mail[j]=car;
    i++;
    j++;
  } while (car != EOF);
  fclose(pfin);
  fclose(pfout);
}


int main (void) {
  Init();
  return 0;
}
