#include <fstream>
#include <iostream>
#include <string>
using namespace std;


void stream_copy(int argc, char *argv[]){
  string x;
  while(cin){
    getline(cin, x);
    if (x.find(argv[1]) != string::npos) {
      x.replace(x.find(argv[1]),strlen(argv[1]), argv[2]);
    }
    cout << x << endl;
  }
}
