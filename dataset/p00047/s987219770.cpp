//Cap Game
#include<bits/stdc++.h>
using namespace std;

int main(){
  int cap[3]={1, 0, 0};
  char s1, s2;
  while(scanf(" %c,%c", &s1, &s2)!=EOF)swap(cap[s1-'A'], cap[s2-'A']);
  for(int i=0; i<3; i++)
    if(cap[i]==1)printf("%c\n", i+'A');
  return 0;
}