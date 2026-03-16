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
		
		int pmax;
		int dmax = 0;
		
		for(int i = 0; i < n; i++){
			int p, d1, d2;
			cin >> p >> d1 >> d2;
			if(dmax < d1 + d2){
				dmax = d1 + d2;
				pmax = p;
			}
		}
		
		cout << pmax << " " << dmax << endl;;
		
	}
	
	return 0;
}