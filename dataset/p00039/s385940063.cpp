#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <string>
#include <cmath>
#include <cstdio>
#include <cstdlib>
using namespace std;

// I: 1 V: 5 X: 10 L: 50 C: 100 D: 500 M: 1000

#define PI 4*atan(1);

int n[100] = {0};

void Convert(char s[]){
  for(int i = 0; s[i] != '\0'; i++){
    if(s[i] == 'I')n[i] = 1;
    if(s[i] == 'V')n[i] = 5;
    if(s[i] == 'X')n[i] = 10;
    if(s[i] == 'L')n[i] = 50;
    if(s[i] == 'C')n[i] = 100;
    if(s[i] == 'D')n[i] = 500;
    if(s[i] == 'M')n[i] = 1000;
  }
}

void clear(void) {
  for(int i = 0; n[i] != 0; i++)n[i] = 0;
}

int main(){
  char s[101];
  while(cin >> s){
    clear();
    int sum = 0;
    Convert(s);
    for(int i = 0; n[i] != 0; i++){
      if(n[i] < n[i + 1]){
        sum -= n[i];
      }
      if(n[i] >= n[i + 1]){
        sum += n[i];
      }
    }
    cout << sum << endl;
  }
}