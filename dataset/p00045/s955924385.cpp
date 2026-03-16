#include <cstdio>
using namespace std;

int main(){
	int i, n, m, total=0, num=0;
	for(i=0 ; scanf("%d,%d", &n, &m ) != EOF ; i++ ){
		total += n*m;
		num += m;
	}
	printf("%d\n%d\n", total , (int)( num/(double)i + 0.5 ) );
}