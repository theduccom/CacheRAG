#include <iostream>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

map<char, bool> pos;

void swapCups(char a, char b) {
  swap(pos[a], pos[b]);
}

int main(void) {
  string command;

  pos['A'] = true;
  pos['B'] = false;
  pos['C'] = false;

  while(cin >> command) {
    swapCups(command[0], command[2]);
  }
  
  if(pos['A']) {
    cout << 'A';
  }
  else if(pos['B']) {
    cout << 'B';
  }
  else {
    cout << 'C';
  }
  cout << endl;
  return 0;
}