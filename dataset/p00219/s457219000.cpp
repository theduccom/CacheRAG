#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	int ice[11];
	while(cin >> n, n){
	fill(ice, ice+10, 0);
		for(int i=0; i < n; i++){
			int m;
			cin >> m;
			ice[m]++;
		}
		for(int i=0; i < 10; i++){
			if(ice[i] == 0)cout << "-" << endl;
			else {
				for(int j=0; j < ice[i]; j++){
					cout << "*";
				}
				cout << endl;
			}
		}
	}
}