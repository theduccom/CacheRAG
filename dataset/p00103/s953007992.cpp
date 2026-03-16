#include<stdio.h>
#include<string.h>

int main(){

    int i,j,n;
    int out=0;
    char s[10];
    scanf("%d", &n);
    if(n!=0){
      int base[4]={};
      while(n>0){
	if(out<3){
	  scanf("%s", s);
	  if(strcmp(s, "HIT") ==0)
	    {base[3]+=base[2];base[2]=base[1];base[1]=base[0];base[0]=1;}
	  if(strcmp(s, "HOMERUN") ==0)
	    {base[3]=base[3]+base[2]+base[1]+base[0]+1;base[0]=0;base[1]=0;base[2]=0;}
	  if(strcmp(s, "OUT") ==0)
	    out++;
	  //printf("%d %d %d %d\n", base[0], base[1], base[2], base[3]);
	}
	else
	  {out=0;printf("%d\n", base[3]);n--;base[0]=0;base[1]=0;base[2]=0;base[3]=0;}
      }
    }
  return 0;
}