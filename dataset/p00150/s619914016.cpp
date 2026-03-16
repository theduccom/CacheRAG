#include <iostream>
#include <stdio.h>
using namespace std;
 
 int main() {
  int pr[10001],i,j,n;
  for (i=0;i<10001;i++) pr[i]=1;
  for (i=2;i<5000;i++) if (pr[i]==1) for (j=i+i;j<10001;j+=i) pr[j]=0;
  while(cin >> n) {
	  if (n==0) break;
	  for (;n>4;n--) if (pr[n]==1 && pr[n-2]==1) { cout << n-2 << ' ' << n << endl; break; }
  }
  return 0;
 }