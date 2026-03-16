#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
main(){
  int a[5];
  while(~scanf("%d,%d,%d,%d,%d",&a[0],&a[1],&a[2],&a[3],&a[4])){
    int card[14]={};
    int p=1;
    int pan=0;
    int tpan=0;
    for(int i=0;i<5;i++){
      card[a[i]]++;
      if(card[a[i]]>3) p=7;
      else if(card[a[i]]>2){
	tpan++;
	pan--;
      }
      else if(card[a[i]]>1){
	pan++;
      }
    }
    if(p==7) puts("four card");
    else if(tpan==1 && pan==1) puts("full house");
    else if(tpan==1) puts("three card");
    else if(pan==2) puts("two pair");
    else if(pan==1) puts("one pair");
    else{
      bool f=false;
      for(int i=0;i<10;i++){
	for(int j=0;j<5;j++){
	  int ind = (i+j)%14+1;
	  if(!card[ind]) break;
	  if(j==4) f=true;
	}
	if(f) break;
      }
      if(f) puts("straight");
      else
	puts("null");
    }
    
  }
}