#include <string>
#include <iostream>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
 
using namespace std;

const int SIZE = 50100;
bool isP[SIZE];
  
int main(){
	fill(isP, isP+SIZE+1, true);
	for(int i = 2; i <= SIZE; i++){
		if(isP[i]){
			for(int j = i*2; j <= SIZE; j += i){
				isP[j] = false;
			}
		}
	}

	int n;

	while(cin >> n){
		for(int i = n-1; i >= 2; i--){
			if(isP[i]){
				cout << i << " ";
				break;
			}
		}
		for(int i = n+1; i <= SIZE; i++){
			if(isP[i]){
				cout << i << endl;
				break;
			}
		}
	}

	return 0;
}