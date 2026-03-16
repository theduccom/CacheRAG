#include<stdio.h>
#include<string.h>

int main(){
  int num,i,j;
  int sum[4]={0};
  char s1[3],tenn;
  while(scanf("%d",&num)!=EOF){
    scanf("%c%s",&tenn,s1);
    if(s1[0]=='A'){
     if(s1[1]=='\0'){
	sum[0]++;
     }else if(s1[1]=='B'){
	sum[2]++;
     }
    } else if(s1[0]=='B'){
      sum[1]++;
    } else if(s1[0]=='O'){
      sum[3]++;
    }
  }
  for(i=0;i<4;i++){
    printf("%d\n",sum[i]);
  }
  return(0);
}