#include<iostream>
#include<cstdio>
#include<limits.h>
#include<algorithm>
using namespace std;

int main(){
  double xmax=0,xmin=INT_MAX,ans,n[100000];

  int i=0;
  while(cin >> n[i]){
    xmax=max(xmax,n[i]);
    xmin=min(xmin,n[i]);
    i++;
}

  cout << xmax-xmin << endl;





}