#include <iostream>
using namespace std;

int main() {
  int a=1,b=0,c=0,temp;
  char x,y;
  while(scanf(" %c,%c",&x,&y) == 2) {
    //   cout << x << y << endl;
    if(x == 'A') {
      temp = a;
      if(y == 'B'){
        a = b;
        b = temp;
      }
      else {
        a = c;
        c = temp;
      }
    }
    else if(x == 'B') {
      temp = b;
      if(y == 'A') {
        b = a;
        a = temp;
      }
      else {
        b = c;
        c = temp;
      }
    }
    else {
      temp = c;
      if(y == 'A') {
        c = a;
        a = temp;
      }
      else {
        c = b;
        b = temp;
      }
    }
  }
  if(a == 1)
    cout << "A" << endl;
  else if(b == 1)
    cout << "B" << endl;
  else
    cout << "C" << endl;
}