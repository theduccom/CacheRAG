#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  int n[5],k[15],m[15],i,y=0;
  char c[7][11]={"null","one pair","two pair","three card","four card","full house","straight"};
  while (scanf("%d,%d,%d,%d,%d",&n[0],&n[1],&n[2],&n[3],&n[4])!=EOF) {
  for (i=0;i<15;i++) { m[i]=0; k[i]=0;}
  for (i=0;i<5;i++) k[n[i]]++;
  for (i=1;i<14;i++) if (k[i]>0) m[k[i]]++;
  y=0; k[14]=k[1];
  if (m[2]>0) y=m[2];
  if (m[3]==1) if (m[2]==1) y=5; else y=3;
  if (m[4]==1) y=4;
  for (i=1;i<11;i++) if (k[i]==1 && k[i+1]==1 && k[i+2]==1 && k[i+3]==1 && k[i+4]==1) y=6; 
  cout << c[y] << endl;
  }
  return 0;
}