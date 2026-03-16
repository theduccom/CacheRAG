#include<cstdio>
#include<iostream>
using namespace std;

int main(){

  int n,m;
  scanf("%d %d",&n,&m);

  while(n!=0 || m!=0){
    int p[1111];
    for(int i=0;i<n;i++){
      scanf("%d",&p[i]);
    }
    
    
    for(int i=0;i<n-1;i++){
      for(int j=n-1;j>i;j--){
	if(p[j]>p[j-1]){
	  int tmp=p[j];
	  p[j]=p[j-1];
	  p[j-1]=tmp;
	}
      }
    }
    
    int sum=0;
    
    for(int i=0;i<n;i++){
      if(i%m == m-1);
      else{
	sum+=p[i];
      }
    }
    printf("%d\n",sum);
    scanf("%d %d",&n,&m);
  }
      
    
  return 0;
}