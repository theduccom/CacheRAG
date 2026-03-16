#include<stdio.h>

int main( ){
	int people,num,one,two,anum,max;

	while(1) {
		max = 0;
		scanf( "%d" ,&people );
		if( people == 0 )break;

		for( int i = 0; i < people; i++ ){
			scanf( "%d %d %d" ,&num ,&one ,&two );
			if( max < one + two ){
				max = one + two;
				anum = num;
			}
		}
		printf( "%d %d\n" ,anum ,max );
	}
	return 0;
}