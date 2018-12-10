using namespace std;
#include <iostream>
#include <fstream>
#include <cstdlib>

int main (int argc, char * argv[])
{
  fstream myin;//,myout;
  char c;

  if (argc < 2) {
    cout << "Usage: ./a.out <sourcefile>\n";
    exit(0);
  }

  for (int i = 1; i < argc; i++) {
    myin.open(argv[i],ios::in);

    if (myin.fail()) {
       cerr << "Il file " << argv[i] << " non esiste\n";
       exit(0);
    }

    while (myin.get(c)) {
      if(c!='\n')
        cout.put(c);
    }
    myin.close();
  }
  cout <<endl;
  return 0;
}
