#include<stdio.h>

int main(){

char x[102]={};
char n[102][102]={};

int w,h;

while(1){

scanf("%d %d",&h,&w);
if(h==0&&w==0)break;
bool f[102][102]={};
for(int i=0;i<h;i++)
{scanf("%s",&x);
for(int j=0;j<=w;j++)
{	n[i][j]=x[j];f[i][j]=true;}
}


int a=0,b=0;
while(f[b][a]!=false){
if(n[b][a]=='>'){a++;f[b][a-1]=false;}
else if(n[b][a]=='<'){a--;f[b][a+1]=false;}
else if(n[b][a]=='v'){b++;f[b-1][a]=false;}
else if(n[b][a]=='^'){b--;f[b+1][a]=false;}
else if(n[b][a]=='.'){break;}
}

if(f[b][a]==false)printf("LOOP\n");
else printf("%d %d\n",a,b);
}
return 0;
}