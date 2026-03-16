#include <iostream>
#include <stdio.h>
using namespace std;
int pr[50050];
int main() {
  int i,j,k=0,n;
  for (i=2;i<50050;i++) if (pr[i]==0) { pr[i]=1; for (j=i+i;j<50050;j+=i) pr[j]=2;}
  while(cin >> n) {
	  for (i=n-1;i>1;i--) if (pr[i]==1) { cout << i << ' '; break;}
	  for (i=n+1;i<50050;i++) if (pr[i]==1) { cout << i << endl; break;}
  }
  return 0;
}