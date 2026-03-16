#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	while(cin >> n && n){
		int o = -1 , p = -1 , u = 0 , c = 0 , t = 0;
		for(int i = 0 ; i < n ; i++){
			cin >> u >> c >> t;
			int d = c + t;
			if(d > o){
				p = u;
				o = d;
			}
		}
		cout << p << " " << o << endl;
	}
}