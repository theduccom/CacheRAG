#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  int cnt[10];
  int flag=0;
  int t[10] = {1,2,4,8,16,32,64,128,256,512};
  while(cin>>n){
    flag = 0;
    for(int i=0;i<10;i++){
      cnt[i] = 0;
    }
    for(int i=9;i>=0;i--){
      if(n - t[i] >= 0 && flag==0){
	n = n - t[i];
	cnt[i]+=2;
	flag=1;
      }else if(n - t[i] >= 0 && flag==1){
	n = n - t[i];
	cnt[i]++;
      }
      if(n == 0) break;
    }
    for(int i=0;i<10;i++){
      if(cnt[i] == 1){
	cout<<t[i]<<" ";
      }else if(cnt[i] == 2){
	cout<<t[i]<<endl;
      }
    }
    
  }
  
}