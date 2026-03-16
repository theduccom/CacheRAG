#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int n,m,p[1000];
	while(scanf("%d%d",&n,&m), n != 0){
		for(int i=0; i<n;i++){
			scanf("%d",&p[i]);
		}
		sort(p,p+n);
		int sum = 0;
		int it = 0;
		for(int i = n-1; i >= 0; i--,it++){
			if(it % m != m-1)
				sum += p[i];
		}
		printf("%d\n",sum);
	}
	return 0;
}