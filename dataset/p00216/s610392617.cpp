#include <stdio.h>
int main()
{
	int w;
	while(1){
		scanf("%d",&w);
		if(w==-1)
			break;
		if(w<=10)
		w=1150;
		else if(w<=20)
			w=1150+(w-10)*125;
		else if(w<=30)
			w=1150+10*125+(w-20)*140;
		else
			w=1150+10*125+10*140+(w-30)*160;
		printf("%d\n",4280-w);
	}
	return 0;
}