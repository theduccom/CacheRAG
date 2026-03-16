#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	int paper[10][10] = {{0}};
	int vecx[] = {0, 1, 0, -1};
	int vecy[] = {-1, 0, 1, 0};
	
	int x, y, size;
	while( scanf("%d, %d, %d", &x, &y, &size) != EOF ){
		switch( size ){
			case 1:
				paper[x][y]++;
				for(int i=0;i<4;i++){
					int nx = x + vecx[i];
					int ny = y + vecy[i];
					
					if(nx >= 0 && nx < 10 && ny >=0 && ny <10){
						paper[nx][ny]++;
					}
				}
				break;
				
			case 2:
				for(int i=-1;i<=1;i++){
					for(int j=-1;j<=1;j++){
						int nx = x + i;
						int ny = y + j;
						
						if(nx >= 0 && nx <10 && ny >= 0 && ny <10){
							paper[nx][ny]++;
						}
						
					}
				}
				break;
				
			case 3:
				for(int i=-1;i<=1;i++){
					for(int j=-1;j<=1;j++){
						int nx = x + i;
						int ny = y + j;
						
						if(nx >= 0 && nx < 10 && ny >= 0 && ny < 10){
							paper[nx][ny]++;
						}
					}
				}
				for(int i=0;i<4;i++){
					int nx = x + vecx[i]*2;
					int ny = y + vecy[i]*2;
					
					if(nx >= 0 && nx < 10 && ny >= 0 && ny < 10){
						paper[nx][ny]++;
					}
				}
				break;
			}
		
	}
	
	int plain = 0, max_c = 0;
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if( !paper[i][j]){
				plain++;
			}
			max_c = max( max_c, paper[i][j]);
		}
	}
	cout<<plain<<endl;
	cout<<max_c<<endl;
	
	return 0;
}