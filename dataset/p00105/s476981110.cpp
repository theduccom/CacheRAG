#include<stdio.h>
#include<string.h>
typedef struct{
  char name[35];
  int page[1001];
  int flg;
}P;

main(){
  int i=0,j,k,pa,flg2,cnt=0,l,tmp;
  char str[35];
  P index[1000];
  P temp;
  while(scanf("%s %d",str,&pa)!=EOF){
    flg2=0;
    for(j=0;j<cnt;j++){
      if(strcmp(str,index[j].name)==0){
	index[j].page[pa]=1;
	flg2++;
	index[j].flg++;
	break;
      }
    }
    if(flg2==0){
      strcpy(index[cnt].name,str);
      index[cnt].page[pa]=1;
      cnt++;
      index[cnt].flg=1;
    }
  }
  for(i=0;i<cnt-1;i++){
    for(j=cnt-1;j>i;j--){
      if(strcmp(index[j].name,index[j-1].name)<0){
	temp=index[j];
	index[j]=index[j-1];
	index[j-1]=temp;
      }
    }
  }

  for(i=0;i<cnt;i++){
    printf("%s\n",index[i].name);
    for(j=1,tmp=0;j<=1000;j++){
      if(index[i].page[j]==1){
	if(tmp!=0)printf(" ");
	printf("%d",j);
	tmp=1;
      }
    }
    printf("\n");
  }
    
  return 0;
}