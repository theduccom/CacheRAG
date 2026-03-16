#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int ax, ay;
	char f[12][12];
	bool flag = false;

	for(int y=0 ; y<12 ; y++){
		for(int x=0 ; x<12 ; x++){
			f[y][x] = 0;
		}
	}

	while( 1 ){
		for(int i=0 ; i<8 ; i++) {
			if( scanf("%s", f[i]) == EOF ){
				flag = true;
				break;
			}
		}
		if(flag) break;

		for(int i=0 ; i<64 ; i++){
			if(f[i/8][i%8]=='1'){
				ax = i%8;
				ay = i/8;
				break;
			}
		}
		if( f[ay+1][ax]=='1' && f[ay][ax+1]=='1' && f[ay+1][ax+1]=='1' ){
			printf("A\n");
		}else if( f[ay+1][ax]=='1' && f[ay+2][ax]=='1' && f[ay+3][ax]=='1' ){
			printf("B\n");
		}else if( f[ay][ax+1]=='1' && f[ay][ax+2]=='1' && f[ay][ax+3]=='1' ){
			printf("C\n");
		}else if( f[ay][ax+1]=='1' && f[ay+1][ax+1]=='1' && f[ay+1][ax+2]=='1' ){
			printf("E\n");
		}else if( f[ay+1][ax]=='1' && f[ay+1][ax+1]=='1' && f[ay+2][ax+1]=='1' ){
			printf("F\n");
		}else if( f[ay][ax+1]=='1' && f[ay+1][ax]=='1' && f[ay+1][ax-1]=='1' ){
			printf("G\n");
		}else if( f[ay+2][ax-1]=='1' && f[ay+1][ax]=='1' && f[ay+1][ax-1]=='1' ){
			printf("D\n");
		}
	}
}