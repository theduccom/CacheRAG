#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)

int memo[1000001];
int sosu[1000001];

int main(){
  rep(i,1000001)sosu[i]=0;
  sosu[0]=sosu[1]=1;
  rep(i,1000001){
    if(sosu[i]==1)continue;
    for(int j=i*2;j<1000001;j+=i){
      sosu[j]=1;
    }
  }

 A:;
  int n,m;
  cin>>n>>m;
  if(n==0)return 0;

  int sina[101];
  rep(i,n){
    cin>>sina[i];
  }
  sort(sina, sina+n);

  rep(i,1000001)memo[i]=0; 

  memo[0]=1;

  rep(i,m+1){
    if(memo[i]==1){
      rep(j,n){
	if(i+sina[j]>m)break;
	memo[i+sina[j]]=1;
      }
    }
  }

  int maxi=-1;
  rep(i,m+1){
    if(sosu[i]==0 && memo[i]==1)maxi=max(maxi,i);
  }

  if(maxi==-1)puts("NA");
  else printf("%d\n",maxi);

  goto A;
}