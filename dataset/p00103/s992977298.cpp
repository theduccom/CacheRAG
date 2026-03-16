#include<bits/stdc++.h>
using namespace std;

int n;
char event[8];

int main(){
  scanf("%d",&n);
  int point,outcnt;
  for(int i=0;i<n;i++){
    int base[3]={0};
    point=0;
    outcnt=0;
    while(outcnt<3){
      scanf(" %s",event);
      if(strcmp(event,"HIT")==0){
	if(base[2]==1){base[2]=0;point++;}
	if(base[1]==1){base[1]=0;base[2]=1;}
	if(base[0]==1){base[1]=1;}
	base[0]=1;
      }
      if(strcmp(event,"HOMERUN")==0){
	for(int i=2;i>=0;i--)if(base[i]==1){base[i]=0;point++;}
	point++;
      }
      if(strcmp(event,"OUT")==0)outcnt++;
    }
    printf("%d\n",point);
  }
}