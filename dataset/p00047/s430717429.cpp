#include <iostream>
using namespace std;

int main(){
  int t[] = {1, 0, 0};
  char a, b;
  char ch;

  while(cin >> a >> ch >> b){
    a -= 'A';
    b -= 'A';
    swap(t[a], t[b]);
  }

  if(t[0]) cout << "A" << endl;
  else if(t[1]) cout << "B" << endl;
  else if(t[2]) cout << "C" << endl;
}