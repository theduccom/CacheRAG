#include <iostream>
#include <cstdio>

using namespace std;

int mini_1(int i, int j, int k){
	if(i <= j && i <= k){
		return i;
	}else if(j <= i && j <= k){
		return j;
	}else{
		return k;
	}
}

int mini_2(int i, int j, int k){
	if(i <= j && j <= k){
		return j;
	}else if(k <= j && j <= i){
		return j;
	}else if(i <= j && k <= i){
		return i;
	}else if(j <= i && i <= k){
		return i;
	}else{
		return k;
	}
}

int main(){
	
	int a, b, c, n, min1, min2, r;
	
	cin >> a >> b >> c;
	
	while(a != 0 || b != 0 || c != 0){
		
		min1 = mini_1(a, b, c);
		min2 = mini_2(a, b, c);
		
		cin >> n;
		
		for(int i = 0; i < n; i++){
			cin >> r;
			if(4 * r * r > min1 * min1 + min2 * min2){
				printf("OK\n");
			}else{
				printf("NA\n");
			}
		}
		
		cin >> a >> b >> c;
	}
	
	return 0;
}