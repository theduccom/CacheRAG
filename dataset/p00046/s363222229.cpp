
#include<iostream>

#include<algorithm>

using namespace std;

int main(){

  double h[50];
  int n=0;

  while(cin>>h[n]){
    n++;
  }

  sort(h,h+n);

  cout<<h[n-1]-h[0]<<endl;

  //h[0]???????°?
  //h[n-1]????????§

  return 0;
}