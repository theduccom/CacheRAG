#include<stdio.h>

int main(){

char p[101],ch,CH;
int N;
while(scanf("%c",&ch)!=EOF){
if(ch!='@')printf("%c",ch);
else{
scanf("%c",&ch);
N=ch-'0';
scanf("%c",&CH);
for(int i=0;i<N;i++)
printf("%c",CH);

}
}
return 0;
}