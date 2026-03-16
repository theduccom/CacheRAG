#include <stdio.h>
#define ull unsigned long long int
typedef struct{
	int o;
	ull val;
}pair;

ull hoge(pair crew[],ull t,ull s,int num){
	crew[num].val+=t*s;
	return crew[num].val;
}

int main(){
	pair crew[4000];
	ull t,s;
	int i,n,num,N=1000000;
	while(1){
		for(i=0;i<4000;i++) crew[i].val=0,crew[i].o=-1;
		i=0;
		scanf("%d",&n);
		if(!n) break;
		while(n--){
			scanf("%d%llu%llu",&num,&t,&s);
			if(N<=hoge(crew,t,s,num)) if(crew[num].o<0) crew[num].o=i++;
		}
		for(int j=0;j<i;j++){
			for(int k=0;k<4000;k++) if(j==crew[k].o) printf("%d\n",k);
		}
		if(!i) printf("NA\n");
	}
	return 0;
}