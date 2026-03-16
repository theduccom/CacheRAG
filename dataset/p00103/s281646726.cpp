#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int ing,ans[n];
  string str;
  memset(ans,0,sizeof(ans));
  for(int i=0;i<n;i++){
    int out=0;
    int hit=0;
    while(1){
      if(out==3)break;
      cin>>str;
      if(str=="HIT"){
	hit++;
	if(hit==4)ans[i]+=1;
	if(hit>3)hit=3;
      }
      else if(str=="OUT"){
	out++;
      }
      else if(str=="HOMERUN"){
	ans[i]+=1+hit;
	hit=0;
      }
    }
  }
  for(int i=0;i<n;i++){
    cout<<ans[i]<<endl;
  }
}