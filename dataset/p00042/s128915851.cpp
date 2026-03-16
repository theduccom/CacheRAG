#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
  int cas=0;
  int anskati=0;
  int ansomo;
  int w,n;
  int kati[1111],omo[1111];
  int memo[1111][1111];
  while(1){
    cas++;
    anskati=0;
    cin>>w;
    if(w==0) break;
    cin>>n;
    for(int i=0;i<=w;i++){
      memo[0][i]=0;
    }
    for(int i=0;i<n;i++){
      char a;
      cin>>kati[i]>>a>>omo[i];
    }
    cout<<"Case "<<cas<<':'<<endl;
    
    for(int i=1;i<=n;i++){
      for(int j=1;j<=w;j++){
	if(j<omo[i-1]){
	  memo[i][j]=memo[i-1][j];
	}else{
	  memo[i][j]=max(memo[i-1][j],memo[i-1][j-omo[i-1]]+kati[i-1]);
	}
      }
    }
    for(int i=0;i<=w;i++){
      if(memo[n][i]>anskati){
	anskati=memo[n][i];
	ansomo=i;
      }
    }
    cout<<anskati<<endl;
    cout<<ansomo<<endl;
    
  }
}