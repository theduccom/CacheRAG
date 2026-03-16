    #include <stdio.h>
    #include <math.h>
     
     
    int main(void){
    	int x, h;
    	double side;
    	double bottom;
     
    	while( 1 ) {
    		scanf( "%d%d", &x, &h );
    		if( x == 0 && h == 0 ) break;
    		side = ( double ) ( x ) * sqrt( (double)( x * x / 4.0 ) + h * h ) ;
    		bottom = ( double ) ( x * x );
    		printf( "%.8lf\n", 2.0*side + bottom );
    	}
    	return 0;
    }