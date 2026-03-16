#include<cstdio>
#include<iostream>

using namespace std;
  
main(){
  int n;
  cin>>n;
 while(n!=0){
    int d[n+1][n+1];

    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
	scanf("%d",&d[i][j]); 
      }
    }

    for(int i=0;i<n;i++){
      d[i][n]=0;
      for(int j=0;j<n;j++){
	d[i][n]+=d[i][j];
      }
    }

    for(int i=0;i<=n;i++){
      d[n][i]=0;
      for(int j=0;j<n;j++){
	d[n][i]+=d[j][i];
      }
    }
    for(int i=0;i<=n;i++){
      for(int j=0;j<=n;j++){
	printf("%5d",d[i][j]);
	if(j==n)
	  printf("\n");
      }
    }
    cin>>n;
  }
}