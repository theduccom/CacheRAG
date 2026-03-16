#include "bits/stdc++.h"

using namespace std;

int main (){
	int n;
	cin >> n;

	for(int i = 1;i <= n;i++){
		int h = 0;
		int o = 0;
		int sc = 0;
		string a;
	while(1){
		cin >> a;
		if(a == "HIT"){
			h++;
		}
		if(a == "OUT"){
			o++;
		}
		if(a == "HOMERUN"){
			sc = sc + h + 1;
			h = 0;
		}
		if(o == 3) break;
		if(h == 4){
			sc++;
			h--;
		}
	}
		cout << sc <<endl;
	}



	return 0;
}