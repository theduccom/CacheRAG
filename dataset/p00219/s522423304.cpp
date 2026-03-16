#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <sstream>
#include <cmath>
#include <queue>

using namespace std;

int main(){
	
	int n;
	
	while(true){
		cin >> n;
		if(n == 0){
			break;
		}
		
		int count[10];
		
		for(int i = 0; i < 10; i++){
			count[i] = 0;
		}
		
		for(int i = 0; i < n; i++){
			int hoge;
			cin >> hoge;
			count[hoge]++;
		}
		
		for(int i = 0; i < 10; i++){
			if(count[i] == 0){
				cout << "-" << endl;
			}else{
				for(int j = 0; j < count[i]; j++){
					cout << "*";
				}
				cout << endl;
			}
		}
		
	}
	
	return 0;
}