#include<cstdio>
#include<iostream>
using namespace std;

typedef struct{
  int value; 
  int weight;
}SET;

int main(){
  int cnt=1;

  while(1){
    
    int w,n;
    SET data[1111];
    int memo[1111][1111]={{0}};
    
    scanf("%d",&w);
    if(w==0) break;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
      scanf("%d,%d",&data[i].value,&data[i].weight);
    }
    
    memo[0][data[0].weight]=data[0].value;
    int max_value=data[0].value;
    int max_weight=data[0].weight;
    
    for(int i=1;i<n;i++){
      if(data[i].value>memo[i-1][data[i].weight]){
	memo[i][data[i].weight]=data[i].value;
      }
      for(int j=1;j<=w;j++){
	if(memo[i-1][j]>0 && memo[i-1][j]>memo[i][j]){
	  memo[i][j]=memo[i-1][j];
	}
	
	if(j+data[i].weight<=w && memo[i-1][j+data[i].weight]<data[i].value+memo[i-1][j]){
	  memo[i][j+data[i].weight] = data[i].value+memo[i-1][j];
	}
	
	if(memo[i][j]==max_value){
	  if(max_weight>j){
	    max_weight=j;
	  }
	}
	if(memo[i][j]>max_value){
	  max_value=memo[i][j];
	  max_weight=j;
	}
      }
    }
    printf("Case %d:\n",cnt);
    printf("%d\n",max_value);
    printf("%d\n",max_weight);
    cnt++;
    
  }	

  return 0;
}