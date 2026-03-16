#include<iostream>
#include<string>
using namespace std;

int map[14][14];

void inkM( int x, int y ){
	for( int i=-1; i<=1; i++ ){
		for( int j=-1; j<=1; j++ ){
			map[x+i][y+j]++;
		}
	}
}

void inkL( int x, int y ){
	inkM( x, y );
	map[x-2][y]++;
	map[x+2][y]++;
	map[x][y-2]++;
	map[x][y+2]++;
}

void inkS( int x, int y ){
	map[x][y]++;
	map[x-1][y]++;
	map[x+1][y]++;
	map[x][y+1]++;
	map[x][y-1]++;
}

int main(){
	int x,y,s;
	string str;
	while(1){
		getline( cin, str );
		if( str.length()==0 ) 	break;
		sscanf( str.c_str(), "%d,%d,%d", &x, &y, &s );
		x+=2; y+=2;
		if( s==1 )		inkS( x, y );
		else if( s==2 )	inkM( x, y );
		else if( s==3 )	inkL( x, y );
	}
	int max=0, cnt=0;
	for( int y=2; y<12; y++ ){
		for( int x=2; x<12; x++ ){
			if( map[x][y] == 0 )	cnt++;
			if( max < map[x][y] )	max = map[x][y];
		}
	}
	cout << cnt << endl;
	cout << max << endl;
	return 0;
}