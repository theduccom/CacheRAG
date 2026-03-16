#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main(){
  char l, r;
  int cup[3] = {};
  cup[0] = 1;
  
  while(scanf("%c,%c", &l, &r) != EOF) {
    swap(cup[r - 'A'], cup[l - 'A']);
    getchar();
  }
  
  for(int i = 0; i < 3; i++) {
    if(cup[i]) printf("%c\n", i + 'A');
  }
  
  return 0;
}
  
  