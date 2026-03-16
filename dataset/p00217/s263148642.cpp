#include<iostream>
#include<algorithm>
using namespace std;

long long int a[10000] = {0},x,y,p,j = 0,b[10000],c[10000];

int main(){

  long long int n;

  while(cin >> n, n){

    for(int i=0;i<=10000;i++) a[i] = 0;

    for(int i=0;i<n;i++){
      cin >> p >> x >> y;

      a[p] = x + y;
    }

    p = 0;

    for(int i=0;i<=10000;i++){
      if(a[0] < a[i]){
	a[0] = a[i];
	p = i;
      }
    }

    b[j] = p;
    c[j] = a[0];
    j++;
  }
  for(int i=0;i<j;i++) cout << b[i] << " " << c[i] << endl;
}