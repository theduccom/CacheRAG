#include<stdio.h>
#include<math.h>

int isprime(int n){
  int i;
  for(i = 2; i * i <= n; i++){
    if(n % i == 0) return 0;
  }
  return 1;
 }

int	main(){
	int	n,	i,	a,	b,	max,	data[10000];
	while(1){
	  a	=	0;
	  b	=	0;
	  max	=	0;
	  scanf("%d",	&n);
	  if(n	==	0) break;
	  for(i	=	n;	i	>=	1;	i--){
		  if(isprime(i)	==	1){
			  a	=	b;
			  b	=	i;
		  }
		  if(a	-	b	==	2)break;
		}
//		for(i	=	1;	i	<=	cnt;	i++){
//			if(data[i]	-	data[i	-	1]	==	2)max	=	i;
//		}
		printf("%d %d\n",	b,	a);
	}
	return	0;
}