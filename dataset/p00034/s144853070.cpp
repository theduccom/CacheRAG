#include<iostream>
#include<stdio.h>
#include<math.h>

int main()
{
	int l[10], v[2];
	while( scanf( "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d", &l[0], &l[1], &l[2], &l[3], &l[4], &l[5], &l[6], &l[7], &l[8], &l[9], &v[0], &v[1] ) != EOF ){
		int sum = 0;
		for( int i = 0; i < 10; i++ ) sum += l[i];
		
		int p = ceil( (double)sum * v[0] / ( v[0] + v[1] ) );
		
		int i = 0, j = 0;
		while( j < p ){
		 	j += l[i++];
		}
		
		std::cout << i << std::endl;
	}

 	return 0;
}