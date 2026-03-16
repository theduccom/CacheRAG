#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;


int main(){
	int w[] = {1,2,4,8,16,32,64,128,256,512};
	int n;
	while(cin >> n){
		int flag[10], num[10];
		int end = 0;
		for(int i = 0;i < 10;i++){
			flag[i] = 0;
			num[i] = 0;
		}
		num[0] = n;
		for(int i = 0;i < 10;i++){
			flag[i] = num[i] % 2;
			num[i+1] = num[i] / 2;
			if(num[i+1] == 0) break;
		}
		for(int i = 0;i < 10;i++){
			if(flag[i] == 1) end = i; 
		}
		for(int i = 0;i < 10;i++){
			if(i == end) cout << w[i] << endl;
			else if(flag[i] == 1) cout << w[i] << " ";
		}

	}
	return 0;
}