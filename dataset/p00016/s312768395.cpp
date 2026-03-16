#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std ;

#define PI 3.1415927

int main(){
	
	double n , angle , red = 90 ;
	double x=0 , y=0 ;
	
	while(1){
		scanf("%lf,%lf",&n ,&angle ) ;
		if( n==0 && angle==0 ) break ;
		
		x += n*cos(PI/180 * red) ;
		y += n*sin(PI/180 * red) ;
		
		red -= angle ;
	}
	
	int ans_x = x ;
	int ans_y = y ;
	
	printf("%d\n%d\n",ans_x ,ans_y) ;
	
return 0 ;
}