#include<bits/stdc++.h>
using namespace std;

int main(){
  int a, bld[4] = {0};
  char c[5];
  char tmp[4][5] = {"A", "B", "AB", "O"};

  while(scanf("%d,%s", &a, c) != EOF){
    for(int i = 0; i < 4; i++){
      if(strcmp(c, tmp[i]) == 0) bld[i]++;
    }
  }

  for(int i = 0; i < 4; i++) cout << bld[i] << endl;
}