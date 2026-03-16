#include<iostream>
#include<cstdio>
#include<string>
#include<map>
#include<algorithm>
#include<queue>
#include <functional>
using namespace std;

int main(){
  
  int n,m,ans=0;
  int p[10000];
  
  while(1){
    ans=0;
    cin >> n >> m;
    if(n==0 && m==0)break;
    for(int i=0;i<n;i++){
      cin >> p[i];
    }
    sort(p,p+n,greater<int>());
    
    if(n < m){
      for(int i=0;i<n;i++){
	ans+=p[i];
      }
      cout << ans << endl;
    }
    else{
      for(int i=1;i<n+1;i++){
	if(i % m == 0){
	  ans+=0;
	}
	else{
	  ans+=p[i-1];
	}
      }
      cout << ans << endl;
    }
  }
  return 0;
}