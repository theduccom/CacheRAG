#include<stdio.h>
#include<math.h>

int main(){

int x,y,z,N,r;
int n[1001]={};
while(1){
scanf("%d %d %d",&n[0],&n[1],&n[2]);if(n[0]==0&&n[1]==0&&n[2]==0)break;
for(int i=0;i<3;i++)
for(int j=2;j>i;j--)
if(n[j-1]>n[j]){int t=n[j];n[j]=n[j-1];n[j-1]=t;}

//printf("%d %d %d\n",n[0],n[1],n[2]);

double rad=atan2( (double)(n[1]), (double)(n[0]));
//rad=rad*3.141592/180;
//printf("%lf\n",rad);

scanf("%d",&N);
for(int i=0;i<N;i++){

scanf("%d",&r);
//printf("%d %lf\n",n[1],(r*2*sin(rad)));



if(n[1]>=(r*2*sin(rad)))printf("NA\n");
else printf("OK\n");
}
}
return 0;
}