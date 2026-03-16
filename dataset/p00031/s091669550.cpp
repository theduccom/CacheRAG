#include<bits/stdc++.h>
using namespace std;
int main(){
  
  int n,b;
  int a[10],i;
  while(cin >> n){
    fill_n(a,10,1024);
    b = 512;
    i=0;
    
    while(n != 0){
      if(n >= b){
	a[i] = b;
	i++;
	n -= b;
      }
      if(b == 1) b--;
      else b /= 2;
    }
    sort(a,a+10);
    for(int j = 0;j < i;j++){
      if(j == i-1) cout << a[j] << endl;
      else cout << a[j] << ' ';
    }
  }

  return (0);
}