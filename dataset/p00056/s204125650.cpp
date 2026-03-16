#include<stdio.h>
int table[500001];
int main(){
	table[1]=-1;
	table[0]=-1;
	for(int i=2;i<500001;i++){
		if(table[i]==0){
			table[i]=1;
			for(int j=i*2;j<500001;j+=i)table[j]=-1;
		}
	}
	int a;
	while(scanf("%d",&a),a){
		int ret=0;
		for(int i=1;i<=a/2;i++){
			if(table[i]==1&&table[a-i]==1)ret++;
		}
		printf("%d\n",ret);
	}
}