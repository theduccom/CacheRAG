//累積和したほうが簡単。最後に配列を上から下に舐める。
//(配列を舐めるときに累積和の挙動をして、元のデータが復元される)
#include<stdio.h>
#include<iostream>
using namespace std;

int data[10][10];
char str[6];
int ink[3][5] = { {-1,0,1,0,-1},{-1,1,1,1,-1},{0,1,2,1,0} };
int abs(int x){return (x>0?x:-x);}

void drop( int y,int x,int size )
{
	size--;
	
	int i;
	for( i = 0;i < 5;i++ ){
		if( ink[size][i] == -1 || x+i-2 < 0 || x+i-2 > 9 )
			continue;
			
		data[max(0,y-ink[size][i])][x+i-2]++;
		if( y+ink[size][i]+1 > 9 )
			continue;
		
		data[y+ink[size][i]+1][x+i-2]--;
	}
}

int main()
{
	int x,y,size;
	int i,j;
	while( scanf("%s",str) != -1 )
	{
		if( str[0] == '\n' || str[0] == '\r' )
			continue;
		x = 	str[0]-'0';
		y = 	str[2]-'0';
		size = 	str[4]-'0';
		
		drop( y,x,size );
	}
	
	//iが横,jが縦
	for( i = 0;i < 10;i++ ){
		int rui = 0;
		for( j = 0;j < 10;j++ ){
			rui += data[j][i];
			data[j][i] = rui;
		}
	}
	
	int ans1 = 0,ans2 = 0;
	
	for( i = 0;i < 10;i++ ){
		for( j = 0;j < 10;j++ ){
			if( data[i][j] == 0 )
				ans1++;
			else
				ans2 = max(ans2, data[i][j]);
		}
	}
	printf("%d\n%d\n",ans1,ans2);
	return 0;
}