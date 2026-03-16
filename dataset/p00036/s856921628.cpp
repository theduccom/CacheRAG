#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;
int main() {
  char c[11][11];
  vector<int> v;
  int dat[7][6]={{1,1,1,1,0,0},{1,0,1,0,1,0},{1,1,0,0,0,0},{1,0,1,0,0,0},{1,1,0,1,0,0},
  {1,0,1,1,0,1},{1,1,1,0,0,0}};
  int i,j,k,x,y,f,g=0;
  while(g==0) {
      f=0;
	  for (i=0;i<8;i++) {
		  gets(c[i]);
		  if (f==0) for (j=0;j<8;j++) if (c[i][j]=='1') { f=1; x=j; y=i; j=9;}
	  }
	  if (gets(c[8])==NULL) g=1; 
	  for (k=0;k<7;k++) {
		  f=0;
		  for (i=0;i<3;i++) for (j=0;j<2;j++) {
			  if (x+j>7 || y+i>7) { if (dat[k][j+i*2]==0) f++;}  else
				  if (c[y+i][x+j]==('0'+dat[k][j+i*2])) f++;
		  }
		  if (f==6) break;
	  }
	  v.push_back(k);
	  }
  for (i=0;i<v.size();i++) cout << (char)('A'+v[i]) << endl;
  return 0;
}