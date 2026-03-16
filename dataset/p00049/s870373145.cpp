#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  int a[4] = {0};
  for(;;){
    char s[3];
    if(scanf("%*d,%s%*c",s) == EOF) break;
    if(s[0] == 'A' && s[1]!='B') a[0]++;
    else if(s[0] == 'B') a[1]++;
    else if(s[0] == 'O') a[3]++;
    else a[2]++;
  }
  for(int i=0; i<4; i++) cout <<a[i]<<endl;
  return 0;
}