#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<queue>
#include<algorithm>
#include<cmath>
#define INF 2147483647
#define llINF 9223372036854775807
#define pb push_back
#define mp make_pair 
#define F first
#define S second
#define ll long long

using namespace std;
int main(){
  int n,x;
  while(cin>>n>>x,n+x){
    int ans=-1;
    bool dp[x+1000]={};
    vector<int>v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
      if(v[i]<=x)
      dp[v[i]]=true;
    }
    sort(v.begin(),v.end());
    for(int i=1;i<x;i++){
      for(int j=0;j<v.size();j++){
	if(dp[i]==true){
	  if(i+v[j]>x){
	    v.pop_back();
	    j--;
	  }else{
	    dp[i+v[j]]=true;
	  }
	}
      }
    }
    int num=x;
    if(num%2==0)num--;
    for(int i=num;i>1;i-=2){
      bool flag=true;
      if(dp[i]==true){
	for(int j=2;j<=sqrt(i);j++){
	  if(i%j==0){
	    flag=false;
	    break;
	  }
	}
	if(flag){
	  ans=i;break;
	}
      }
    }
    if(ans==-1&&dp[2]==false&&dp[1]==false)
      cout<<"NA"<<endl;
    else if(ans!=-1)
      cout<<ans<<endl;
    else{
      if(dp[2]==true)
      cout<<2<<endl;
      else
	cout<<1<<endl;
    }
  }
  return 0;
}