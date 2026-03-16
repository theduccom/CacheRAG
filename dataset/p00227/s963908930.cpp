#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int n,m;
	while(scanf("%d%d",&n,&m)){
		if(n==0) break;
	int x[1000],i,sum=0;
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
		sum+=x[i];
	}
	sort(x,x+n);
	for(i=n%m;i<n;i+=m){
		sum-=x[i];
	}
	printf("%d\n",sum);
	}
	return 0;
}