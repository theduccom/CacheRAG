#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <cmath>
#include <algorithm>
using namespace std;

void drop1(int s[][14] , int x , int y){
	s[x][y]++;
	s[x-1][y]++;
	s[x][y-1]++;
	s[x+1][y]++;
	s[x][y+1]++;
}

void drop2(int s[][14] , int x , int y){
	drop1(s , x , y);
	s[x-1][y-1]++;
	s[x+1][y-1]++;
	s[x-1][y+1]++;
	s[x+1][y+1]++;
}

void drop3(int s[][14] , int x , int y){
	drop2(s , x , y);
	s[x-2][y]++;
	s[x][y-2]++;
	s[x+2][y]++;
	s[x][y+2]++;
}


int main(){
	int square[14][14]={0};
	int x , y , s , mx=0 ,cnt=0;
	char c;
	while(cin >> x >> c >> y >> c >> s){
		switch(s){
			case 1:
			drop1(square , x+2 , y+2);
			break;
			case 2:
			drop2(square , x+2 , y+2);
			break;
			case 3:
			drop3(square , x+2 , y+2);
		}
	}
		for(int i=2;i<12;++i){
			for(int j=2;j<12;++j){
				if(square[i][j]==0) cnt++;
				mx=max(mx , square[i][j]);
			}
		}
		cout << cnt << endl << mx << endl;	
	return 0; 
}