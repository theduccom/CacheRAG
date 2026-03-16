#include<iostream>
#include<algorithm>
#include<cstring>
#define MAX_X 1000100
using namespace std;

int n;
int x;
int d[100];
bool p[MAX_X];
bool dp[MAX_X];

int main(){
  
  memset(p,true,sizeof(p));
  p[0] = false;
  for(int i=2;i*i<MAX_X;i++){
    if(p[i]) for(int j=i+i;j<MAX_X;j+=i) p[j] = false;
  }
  
  while(true){
    cin >> n >> x;
    if(!n && !x) break;
    
    memset(dp,false,sizeof(dp));
    dp[0] = true;
    for(int i=0;i<n;i++) cin >> d[i];
    
     for(int i=0;i<MAX_X;i++){
      if(dp[i]){
	for(int j=0;j<n;j++){
	  if(i+d[j] <= x) dp[i+d[j]] = true;
	}
      }
    }
    
    int ans = -1;
    for(int i=0;i<=x;i++){
      if(dp[i] && p[i]) ans = i;
    }

    if(ans < 0) cout << "NA" << endl;
    else cout << ans << endl;
    
  }
}