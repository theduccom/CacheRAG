#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  char a,b,c;
  int cup[]={1,0,0},x,y,z;
  for(;;){
    if(scanf("%c,%c%*c",&a,&b) == EOF) break;
    x = a-'A';
    y = b-'A';
    z = cup[x];
    cup[x] = cup[y];
    cup[y] = z;
  }
  for(int i=0; i<3; i++) if(cup[i] == 1) cout <<(char)('A'+i)<<endl;
  return 0;
}