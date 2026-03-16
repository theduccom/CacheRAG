#include<stdio.h>
int main(){
  char s1,s2;
  char tenn;
  int data[3]={0};
  int i;
  data[0]=1;
  while(scanf(" %c",&s1)!=EOF){
    scanf("%c%c",&tenn,&s2);
    if(data[s1-'A']==1){
      data[s1-'A']=0;
      data[s2-'A']=1;
    } else if(data[s2-'A']==1){
      data[s1-'A']=1;
      data[s2-'A']=0;
    } else{
      data[s1-'A']=0;
      data[s2-'A']=0;
    }
  }
  
  for(i=0;i<3;i++){
    if(data[i]==1){
      printf("%c\n",('A'+i));
    }
  }
  return(0);
}