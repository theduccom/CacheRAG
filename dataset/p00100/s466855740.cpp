#include<stdio.h>

int main(){
  while(1){
    int n;
    scanf("%d", &n);
    if(n!=0){
      int i,k;
      int a, b, c;
      int j=0;
      int d[4001]={};
      double e[4001] ={};
      int flag = 0;
      for(i=0;i<n;i++){
	scanf("%d %d %d", &a, &b, &c);
	int flag1=0;
	for(k=0;k<j;k++){
	  if(d[k]==a)
	    flag1=1;
	}
	if(flag1==0)
	  {d[j]=a;j++;}

	//if(e[a]+b*c<=2147483647)
	e[a]=e[a]+(double)b*(double)c;
	//else
	  //e[a]=(double)2147483647;//printf("aa\n");
	
      }


      for(i=0;i<4001;i++){
	if(e[d[i]]>=1000000.){
	  printf("%d\n", d[i]);
	  flag++;
	}
      }
      if(flag==0)
	printf("NA\n");
      
    }
    else{
      break;
    }
  }
  return 0;
}