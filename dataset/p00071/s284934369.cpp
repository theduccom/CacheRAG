#include<cstdio>
#include<cmath>
#include<vector>
#include<iostream>
#include<queue>

using namespace std;

#define PII pair<int,int>

queue<PII> Q;

int main(void){
	
	int D;
	char m[16][16];
	
	while(scanf("%d",&D) != EOF){
		
		for(int a = 1; a <= D; a++){
			
			int dx[12] = {-3,-2,-1, 0, 0, 0, 0, 0, 0, 1, 2, 3};
			int dy[12] = { 0, 0, 0, 3, 2, 1,-1,-2,-3, 0, 0, 0};
			int x,y;
			
			for(int i = 1; i < 9; i++){
				scanf("%s",m[i]+1);
			}
			
			scanf("%d %d", &x, &y);
			Q.push(PII(y,x));
			
			while(!Q.empty()){
		//		cout << Q.size() << endl;
				y = Q.front().first;
				x = Q.front().second;
				Q.pop();
				
				if(m[y][x] == '1'){
					m[y][x] = '0';
					for(int i = 0; i < 12; i++){
						if(0 < y+dy[i] && y+dy[i] < 9 && 0 < x+dx[i] && x+dx[i] < 9){
							Q.push(PII(y+dy[i],x+dx[i]));
						}
					}
				}
			}
			
			printf("Data%2d:\n",a);
			for(int i = 1; i < 9
			; i++){
				puts(m[i]+1);
			}
		}
	}
	return 0;
}