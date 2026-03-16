#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<vector>
#include<cmath>
#include<cstdio>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define it ::iterator
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double ESP=1e-10;
using namespace std;
int main(){
#define MAX 1000000  
  bool sosu[MAX]={0};
  for(int i=4;i<MAX;i+=2)sosu[i]=true;
  for(int i=3;i<MAX;i+=2){
    if(sosu[i])continue;
    for(int j=3*i;j<MAX;j+=2*i)sosu[j]=true;
  }
  int n;
  while(cin>>n){
    int i;
    for(i=n-1;i>=2;i--)if(sosu[i]==0)break;
    cout<<i;
    for(i=n+1;i<MAX;i++)if(sosu[i]==0)break;
    cout<<" "<<i<<endl;
  }
}