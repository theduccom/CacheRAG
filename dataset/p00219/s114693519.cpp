#include<vector>
#include<list>
#include<algorithm>
#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
  int i,j;
  int a[10],m,n;
  while(cin>>n&&n){
    memset(a,0,sizeof(a));
    for(i=0;i<n;i++){
      cin>>m;
      a[m]++;
    }
    for(i=0;i<10;i++){
      if(a[i]){
	for(j=0;j<a[i];j++)
	  cout<<"*";
	cout<<endl;
      }else
	cout<<"-"<<endl;
    }
  }
  return 0;
}