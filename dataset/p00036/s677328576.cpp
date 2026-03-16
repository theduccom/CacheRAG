#include<stdio.h>

char grid[8][8];
int vecx[7][3] = { { 0, 1, 1 }, { 0, 0, 0 }, { 1, 2, 3 }, { 0, -1, -1 }, { 1, 1, 2 }, { 0, 1, 1 },{ 1, -1, 0 } };
int vecy[7][3] = { { 1, 0, 1 }, { 1, 2, 3 }, { 0, 0, 0 }, { 1, 1, 2 }, { 0, 1, 1 }, { 1, 1, 2 }, { 0, 1, 1 } };

int main()
{
	while( 1 ){
	
		for( int i = 0; i < 8; i++ )if( scanf( "%s", grid[i] ) == EOF ) goto end;
	
		for( int i = 0; i < 8; i++ ){
		 	for( int j = 0; j < 8; j++ ){
				if( grid[i][j] == '1' ){
					for( int k = 0; k < 7; k++ ){
						if( grid[i+vecy[k][0]][j+vecx[k][0]] == '1' 
						 && grid[i+vecy[k][1]][j+vecx[k][1]] == '1' 
						 && grid[i+vecy[k][2]][j+vecx[k][2]] == '1' )
							printf( "%c\n", 'A' + k );	
					}
				}
			}
		}
	}

end:

 	return 0;
}