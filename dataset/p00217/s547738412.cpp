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
  int i;
  int n,b,c,d,e,f;
  while(cin>>n&&n){
    f=-1;
    for(i=0;i<n;i++){
      cin>>b>>d>>e;
      if(f==-1||f<d+e){
	f=d+e;
	c=b;
      }
    }
    cout<<c<<" "<<f<<endl;
  }
  return 0;
}