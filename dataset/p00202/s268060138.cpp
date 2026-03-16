#include<bits/stdc++.h>
using namespace std;
bool sosu[1000005]={0};
bool check[1000005];
main(){
  int n,k;
  int shop;
  sosu[1]=1;
  for(int i=2;i<(int)sqrt(1000005);i++){
    if(sosu[i]==0){
      for(int j=i;j<1000005;j+=i){
	sosu[j]=true;
      }
    }
  }
  while(1){
    bool a=true;
    cin>>n>>k;
    if(n==0&&k==0)break;
    memset(check,false,sizeof(check));
    for(int i=1;i<=n;i++){
      scanf("%d",&shop);
      check[shop]=true;
      for(int j=shop;j<=k;j++){
	if(check[j-shop]==true){
	  check[j]=true;
	}
      }  
    }
    for(int i=k;i>0;i--){
      if(sosu[i]==false&&check[i]==true){
	cout<<i<<endl;
	i=0;
	a=false;
      } 
    }
    if(a){
      cout<<"NA"<<endl;
    }
  }
}