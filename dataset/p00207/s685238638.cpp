#include<iostream>
using namespace std ;

int w , h ;
int gx , gy , color , ans ;
int map[101][101] = {} ;
int dx[] = { 0,1,0,-1 } ;
int dy[] = { 1,0,-1,0 } ;

void judge( int nx , int ny ){
	if( nx==gx && ny==gy ) ans = 1 ;
	
	map[nx][ny] = 0 ;
	
	for( int i=0 ; i<4 ; i++ ){
		if( nx+dx[i]>0 && nx+dx[i]<=w && ny+dy[i]>0 && ny+dy[i]<=h )
			if( map[nx+dx[i]][ny+dy[i]] == color )
				judge( nx+dx[i] , ny+dy[i] ) ;
	}
}

int main(){
	
	int sx , sy ;
	int n ;
	int c , d , x , y ;
	int a , b ;
	
	while(1){
		cin >> w >> h ;
		if( w==0 && h==0 ) break;
		
		cin >> sx >> sy ;
		cin >> gx >> gy ;
		cin >> n ;
		
		for( int i=0 ; i<n ; i++ ){
			cin >> c >> d ;
			cin >> x >> y ;
			if( d==0 ){
				a = 4 ;
				b = 2 ;
			}else {
				a = 2 ;
				b = 4 ;
			}
			
			for( int j=x ; j<=x+a ; j++ ){
				for( int k=y ; k<=y+b ; k++ ){
					map[j][k] = c ;
					if( sx==j && sy==k ) color = c ;
				}
			}
		}
		
		ans = 0 ;
		judge( sx , sy ) ;
		
		if( ans == 1 ) cout << "OK" << endl ;
		else cout << "NG" << endl ;
		
		for( int i=1 ; i<w ; i++ )
			for( int j=1 ; j<h ; j++ )
				map[i][j] = 0 ;
	}
	
return 0;
}