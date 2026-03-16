#include<stdio.h>

int	main(){
	int	i,	k,	x,	a,	b,	data[10000];
	for(i	=	2;	i	<=	10000;	i++){
		data[i]	=	1;
	}
	for(i	=	2;	i	*	i	<=	10000;	i++){
		if(data[i]){
			for(k	=	2	*	i;	k	<=	10000;	k	+=	i){
				data[k]	=	0;
			}
		}
	}
	while(1){
		a	=	0;
		b	=	0;
		scanf("%d",	&x);
		if(x	==	0)break;
		for(x;	x	>=	2;	x--){
			if(data[x]	==	1){
				b	=	a;
				a	=	x;
			}
			if(b	-	a	==	2)break;
		}
		printf("%d %d\n",	a,	b);
	}
	return	0;
}