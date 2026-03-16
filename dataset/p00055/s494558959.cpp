#include <cstdio>
using namespace std;

int main(){
	double sum, a[10], n;

	while( scanf("%lf" , &n ) != EOF ){
		sum = n;
		a[0] = n;
		for(int i=1 ; i<10 ; ++i){
			a[i] = ( i%2 )? a[i-1]*2.0 : a[i-1]/3.0 ;
			sum += a[i];
		}
		printf("%.8f\n", sum);
	}
}