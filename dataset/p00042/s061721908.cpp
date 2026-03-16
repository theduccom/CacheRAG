#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int w,n;
pair<int,int> takara[1002];
int dp[1002][10002];
int saidai=0,banti=0;
char ch;
int now=1;
main(){
  while(1){
    cin>>w;
    if(w==0){
      break;
    }
    cin>>n;
    for(int i=1;i<=n;i++){
      cin>>takara[i].first>>ch>>takara[i].second;
    }
    saidai=0;
    banti=0;
    for(int i=0;i<=n;i++){
      for(int j=0;j<=w;j++){
	if(i==0){
	  dp[i][j]=0;
	}
	else if(j-takara[i].second<0){
	  dp[i][j]=dp[i-1][j];
	}
	else{
	  dp[i][j]=max(dp[i-1][j],dp[i-1][j-takara[i].second]+takara[i].first);
	}
	if(i==n&&saidai<dp[i][j]){
	  saidai=dp[i][j];
	  banti=j;
	}
      }
    }
    cout<<"Case "<<now<<":"<<endl<<saidai<<endl<<banti<<endl;
    now++;
  }
}