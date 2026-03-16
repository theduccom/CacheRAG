#include <cstdio>

using namespace std;

int main(){
	int n,sum;
	while(scanf("%d",&n)){
		if(n==0)break;
		sum=0;
		while(n>4){
			sum+=n/5;
			n/=5;
		}
		printf("%d\n",sum);
	}
}