#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <sstream>
#include <cmath>
#include <queue>

using namespace std;

int main(){
	
	int w;
	
	while(true){
		cin >> w;
		if(w < 0){
			break;
		}
		
		int cost = 0;
		
		if(w <= 10){
			cost = 1150;
		}else if(w <= 20){
			cost = 1150 + 125 * (w - 10);
		}else if(w <= 30){
			cost = 1150 + 125 * 10 + 140 * (w - 20);
		}else{
			cost = 1150 + 125 * 10 + 140 * 10 + 160 * (w - 30);
		}
		
		cout << 4280 - cost << endl;
		
	}
	
	return 0;
}