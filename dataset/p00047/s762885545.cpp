#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  char n1, n2, comma;
  int cup[3];
  cup[0] = 1;
  cup[1] = 0;
  cup[2] = 0;
  int temp;

  while(cin >> n1 >> comma >> n2){
    temp = cup[n1-'A'];
    cup[n1-'A'] = cup[n2-'A'];
    cup[n2-'A'] = temp;
  }

  for(int i = 0; i < 3; i++) {
    if(cup[i] == 1) {
       putchar(i+65);
       putchar('\n');
    }
  }

  return 0;
}

