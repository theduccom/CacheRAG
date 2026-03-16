#include<iostream>
#include<cstring>
#include<algorithm>
#include<string>
#include<vector>
#include<cstdio>
#include<cmath>
#define pb(in,tmp) in.push_back(tmp)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,b) loop(i,0,b)
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
using namespace std;
int main(){
  int i,j;
  #define MAX 10000
  int num[MAX]={1,1,0};
 
  for(i=3;i<MAX;i+=2){
    if(num[i]==1)
      continue;
    for(j=3*i;j<MAX;j+=i*2)
      num[j]=1;
  }
  int n;
  while(cin>>n,n){
    n+=n%2-1;
    for(i=n;i>2;i-=2)if((!num[i])&&(!num[i-2]))break;
	cout<<i-2<<" "<<i<<endl;
  }
}