#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

string str[8];

void chain(int x, int y){
	
	if(x < 0 || x >= 8 || y < 0 || y >= 8){
		return;
	}
	if(str[y][x] == '0'){
		return;
	}else{
		str[y][x] = '0';
		chain(x - 1, y);
		chain(x - 2, y);
		chain(x - 3, y);
		chain(x + 1, y);
		chain(x + 2, y);
		chain(x + 3, y);
		chain(x, y - 1);
		chain(x, y - 2);
		chain(x, y - 3);
		chain(x, y + 1);
		chain(x, y + 2);
		chain(x, y + 3);
	}
	
}

int main(){
	
	
	int n, x, y;
	
	cin >> n;
	
	for(int loop = 1; loop <= n; loop++){
		for(int i = 0; i < 8; i++){
			cin >> str[i];
		}
		cin >> x >> y;
		chain(x - 1, y - 1);
		
		printf("Data %d:\n", loop);
		for(int i = 0; i < 8; i++){
			cout << str[i] << endl;;
		}
		
	}
	
	return 0;
}