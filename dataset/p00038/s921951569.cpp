#include<algorithm>
#include<iostream>
#include<stdio.h>
#include<string.h>

int main()
{
	int card[5];
	
	while( scanf( "%d,%d,%d,%d,%d", &card[0], &card[1], &card[2], &card[3], &card[4] ) != EOF ){
	 	
		int a[20];
		memset( a, 0, sizeof( a ) );
		int c = 0;
		
		for( int i = 0; i < 5; i++ ) a[card[i]]++;
		
		for( int i = 0; i < 5; i++ ){
			 c = std::max( c, (int)std::count( card, card + 5, card[i] ) );
		}
		
		bool f = false, f2 = false;
		int m;
		
		switch( c ){
			case 4:
		 		puts( "four card" );
				break;
			case 3:
				for( int i = 0; i < 5; i++ ){
			 		if( std::count( card, card + 5, card[i] ) == 2 ){
						f = true; 
						break;
					}
				}
				
				if( f ){
				 	puts( "full house" );
				}
				else{
				 	puts( "three card" );
				}
				break;
			case 2:
				for( int i = 0; i < 5; i++ ){
					if( std::count( card, card + 5, card[i] ) == 2 && !f ){
					 	m = card[i];
						f = true;
					}
					if( card[i] != m && std::count( card, card + 5, card[i] ) == 2 && f ){
						puts( "two pair" );
						f2 = true;
						break;
					}
				}
				if( !f2 ) puts( "one pair" );
				break;
			case 1:	
				for( int i = 1; i <= 10; i++ ){
					if( a[i] == 1 && a[i+1] == 1 && a[i+2] == 1 && a[i+3] == 1 && a[(i+4)%13] == 1 ) f = true;
				}
				
				if( f ){
				 	puts( "straight" );
				}
				else{
					puts( "null" );
				}
				
				break;
		}

	}

 	return 0;
}