#include<iostream>
#include<cstdio>

using namespace std;

int main(){
	int n,div,cnt;
	while(scanf("%d",&n)){
		if(n==0)
		break;
		if(n<5)
		printf("0\n");
		else{
			cnt=0;
			div=5;
			while(div<=n){
				cnt+=n/div;
				div*=5;
			}
			printf("%d\n",cnt);
		}
	}
}