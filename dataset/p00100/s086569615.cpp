#include <iostream>

using namespace std;

int main(){
	int n;
	
	while(1){
		int e, p, q;
		int x[4001] = {0};
		int m[4001] = {0};
		
		cin >> n;
		if(n == 0) break;
		
		bool flag = true;
		for(int i = 1; i <= n; i++){
			cin >> e >> p >> q;
			m[i] = e;
			x[e] += p * q;
			}
		
		for(int i = 1; i <= n; i++){
			if(x[m[i]] >= 1000000){
				cout << m[i] << endl;
				x[m[i]] = 0;
				flag = false;
			}
		}
		if(flag) cout << "NA" << endl;
	}
	
	return 0;
}