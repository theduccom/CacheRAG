#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  int i = 0;
  char str[100000];
  
  fgets(str, 100000, stdin);

  while(str[i] != '\n'){
    if('a' <= str[i] && str[i] <= 'z'){
      str[i] = str[i] - 'a' + 65;
    }
    i++;
  }
  
  cout << str << flush;

  return 0;
} 