#include<iostream>
#include<stdio.h>
using namespace std;

int main(){

int N,M,K,R;
double ave=0,S=0,aav=0;
while(1){
cin>>N;if(N==0)break;
for(int i=0;i<N;i++){
cin>>M>>R>>K;
S=M+R+K;ave=S/3;aav=(M+R)/2;
if(aav>=90)printf("A\n");
else if(ave>=80)printf("A\n");
else if(M==100||R==100||K==100)printf("A\n");
else if(ave>=70)printf("B\n");
else if(ave>=50){if(M>=80||R>=80)printf("B\n");
else printf("C\n");}
else printf("C\n");
}
ave=0,S=0,aav=0;
}
return 0;
}