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
  int h,i;
  int n,m,s;
  int *a;
  while(cin>>n>>m&&n+m){
    a=new int[n];
    for(i=0;i<n;i++)
      cin>>a[i];
    do{
      h=0;
      for(i=1;i<n;i++){
	if(a[i-1]<a[i]){
	  swap(a[i-1],a[i]);
	  h=1;
	}
      }
    }while(h);
    s=0;
    for(i=0;i<n;i++){
      if((i+1)%m)
	s+=a[i];
    }
    cout<<s<<endl;
    delete[]a;
  }
  return 0;
}