
#include<cstdio>

int main(void){
	int p,r;
	scanf("%d",&p);
	while(p!=-1){while(1){
if(p<=20){
r=1150;
if(p>=10)r+=(p-10)*125;
break;
}
if(p<=30){
r=2400;
r+=(p-20)*140;
break;
}
r=3800;
r+=(p-30)*160;
break;
}
	printf("%d\n",4280-r);
	scanf("%d",&p);
}
return 0;
}