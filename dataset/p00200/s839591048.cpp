#include<math.h>
#include<stdio.h>
#include<iostream>
#include<algorithm>
#define SIZE 1000
#define INF 1000000
using namespace std;

int main(){

  int h,i,j,k;
  int p,q,r;
  int n,m;
  int a,b,c,d;
  int cost[SIZE][SIZE],time[SIZE][SIZE];

  while(cin>>n>>m,(n!=0 && m!=0)){

    for(i=1;i<=101;i++){
      for(j=1;j<=101;j++){
	cost[i][j]=INF;
	time[i][j]=INF;
      }
    }

    for(i=0;i<n;i++){
      cin>>a>>b>>c>>d;
      cost[a][b]=cost[b][a]=c;
      time[a][b]=time[b][a]=d;
    }

	for(i=1;i<m+1;i++){
	  for(j=1;j<m+1;j++){
	    for(k=1;k<m+1;k++){
	      cost[j][k]=min(cost[j][k],cost[j][i]+cost[i][k]);
	      time[j][k]=min(time[j][k],time[j][i]+time[i][k]);
	    }
	  }
	}

	cin>>k;
	for(i=0;i<k;i++){
	  cin>>p>>q>>r;
	  
	  if(r==0){
	    cout<<cost[p][q]<<endl;
	  }
	  else {
	    cout<<time[p][q]<<endl;
	  }
	}
	
  }
  
  return 0;
}