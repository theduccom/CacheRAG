#include<cstdio>
using namespace std;

int main(){
	int n;
	while( scanf("%d", &n ), n ){
		int zero=0;
		for( int i=5; i<=n; i+=5 ){
			int k=i;
			while( k%5==0 ){
				k/=5;
				zero++;
			}
		}
		printf("%d\n", zero);
	}
	return 0;
}