#include <fstream>
#include <iostream>
#include <string>
#include "include/streamcopy.h"
using namespace std;

//void stream_copy(int argc, char *argv[]);

int main(int argc, char *argv[]){
  if (argc != 3) {
    cerr << "usage: prog1 “input” “output” < file1.txt > file2.txt" << endl;
    return 1;
  }
  stream_copy(argc, argv);
  return 0;
}

/*
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
*/
