#include<cstdio>
using namespace std;

int main(){
	while(1){
		int n;
		int map[11][11];
		int row[11];
		int line[11];
		int allSum = 0;
		scanf("%d", &n );
		if( n == 0 ) break;

		for( int y=0; y<n; y++ ){
			for( int x=0; x<n; x++ ){
				scanf("%d", &map[x][y]);
			}
		}
		for( int y=0; y<n; y++ ){
			line[y] = 0;
			for( int x=0; x<n; x++ ){
				line[y] += map[x][y];
			}
		}
		for( int x=0; x<n; x++ ){
			row[x] = 0;
			for( int y=0; y<n; y++ ){
				row[x] += map[x][y];
			}
		}
		for( int i=0; i<n; i++ ){
			allSum += row[i];
		}
		for( int y=0; y<n; y++ ){
			for( int x=0; x<n; x++ ){
				printf("%5d", map[x][y]);
			}
			printf("%5d\n", line[y] );
		}
		for( int x=0; x<n; x++ ){
			printf("%5d", row[x]);
		}
		printf("%5d\n", allSum );
	}
	return 0;
}