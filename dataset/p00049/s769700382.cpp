#include<bits/stdc++.h>
using namespace std;
int main(){

  int a,c[4]={0};
  char b[3];

  while(scanf("%d,%s",&a,b) != EOF){

    if(strcmp("A",b)==0) c[0]++;
    else if(strcmp("B",b)==0) c[1]++;
    else if(strcmp("AB",b)==0) c[2]++;
    else if(strcmp("O",b)==0) c[3]++;
  }

  for(int i=0;i<4;i++) cout << c[i] << endl;
  return (0);
}