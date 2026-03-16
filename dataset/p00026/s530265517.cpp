#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<vector<int> > field(14, vector<int>(14, 0));
	int x,y,s;
	while(scanf("%d,%d,%d", &x, &y, &s)!=EOF){
		x+=2; y+=2;
		for(int i=-2; i<=2; i++){
			for(int j=-2; j<=2; j++){
				if(s==1 && abs(i)+abs(j)<=1){
					field[x+i][y+j]++;
				}
				if(s==2 && abs(i)<=1 && abs(j)<=1){
					field[x+i][y+j]++;
				}
				if(s==3 && abs(i)+abs(j)<=2){
					field[x+i][y+j]++;
				}
			}
		}
	}
	
	int white = 0;
	int deep = 0;
	for(int i=2; i<=11; i++){
		for(int j=2; j<=11; j++){
			deep = max(deep, field[i][j]);
			if(field[i][j] == 0 ) white++;
		}
	}
	cout << white << endl << deep << endl; 
    return 0;
}