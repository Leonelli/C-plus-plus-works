
#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <cstring>
using namespace std;



int main( int argc , char *argv[]){
	
	int cont=0;
	char c;
	
	if (argc != 2)
	{
		cerr << "Sintassi errata. </a.out file>"<<endl;
		exit(EXIT_FAILURE);
	}
	else{
		cout << "Lettura"<<endl;
		fstream input;
		input.open(argv[1], ios::in);
		if(input.fail()){
			cerr << "Errore nell'apertura del file"<<endl;
			exit(EXIT_FAILURE);
		}
		char line [256];
		while(!input.fail()){
			input.getline(line,256);
			cout<<line<<endl;
			cont = 0;
			while(input.get(c)){
				if(c=='@'){
					cont++;
				}
			}
			if (cont=!1)
			{
				cout << "indirizzo non valido"<<endl;
			}
		}
	}
}
