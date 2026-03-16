#include<stdio.h>

int main(){
int n;
while(1){
scanf("%d",&n);if(n==0)break;

int a=0,b=0,c=0;int i=1;
while(i<=n){
{int t=i;
while(1){
	while(1){
		if(t%10!=0)break;
		a++;
	t=t/10;
	}
	while(1){if(t%5!=0)break;b++;t=t/5;}
	while(1){if(t%2!=0)break;c++;t=t/2;;}
	if(t%10!=0&&t%5!=0&&t%2!=0)break;
}
	i++;
}

}
int s=0;
if(b<c)c=b;
s=a+c;
printf("%d\n",s);
}
return 0;
}