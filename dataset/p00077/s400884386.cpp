#include <iostream>
#include <cstdio>
#include <string.h>
#include <cstring>
using namespace std;
int main(void) {
  char s[100];
  int cnt, len;

  while(scanf("%s", s) != EOF) {
    len = strlen(s);
    for(int i = 0 ; i < len ; i++) {
      
      if(s[i] == '@') {
	cnt = s[i+1] - '0';
	for(int j = 0 ; j < cnt ; j++) {
	  cout << s[i+2];
	}
      }
      else if(s[i] != '@' && s[i-2] != '@' && s[i-1] != '@') cout << s[i];
    }
    cout << endl;
  }
  return 0;
}