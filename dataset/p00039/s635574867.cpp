 #include<stdio.h>

int main(){
char ch;
char p[101]={};
int sum;
int w,b,a;
sum=0;ch=NULL;w=0;b=0;a=0;
//scanf("%s",p);printf("%c",(p[1]));
while(scanf("%s",p)!=EOF)
{
for(int i=0;i<101;i++){

	ch=p[i];
 if(ch=='I')w=1;
else if(ch=='V')w=5;
else if(ch=='X')w=10;
else if(ch=='L')w=50;
else if(ch=='C')w=100;
else if(ch=='D')w=500;
else if(ch=='M')w=1000;
switch(w){
case 1:
a=1;break;
case 5:
	if(b==1){a=3;break;}
else  if(b!=1)a=5;break;
case 10:
if(b==1){a=8;break;}
else  if(b!=1)a=10;break;
case 50:
if(b==10){a=30;break;}
else  if(b!=10)a=50;break;
case 100:
if(b==10){a=80;break;}
else  if(b!=10)a=100;break;
case 500:
if(b==100){a=300;break;}
else  if(b!=100)a=500;break;
case 1000:
if(b==100){a=800;break;}
else  if(b!=100)a=1000;break;
}

sum+=a;b=a;
ch='\0';w=0;a=0;
}
printf( "%d\n",sum);
sum=0;ch='\0';w=0;b=0;a=0;
for(int i=0;i<101;i++)
	p[i]='\0';


}

return 0;
}