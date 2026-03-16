#include<bits/stdc++.h>
using namespace std;
int num[500000]={0};
int main(){
  for(int i=2;i<sqrt(500000);i++){
    for(int j=i;j<500000;j+=i){
      if(num[j]==0 && j!=i){
	num[j]=1;
      }
    }
  }
  while(1){
    int n;
    cin>>n;
    if(n==0) break;
    int cnt=0;
    long long sum=0;
    for(int i=2;i<500000;i++){
      if(cnt==n){
	break;
      }
      if(num[i]==0){
	cnt++;
	sum+=i;
	if(cnt == n){
	  break;
	}
      }
    }
    cout<<sum<<endl;
  }
  return 0;
}
    