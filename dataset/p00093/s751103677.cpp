#include <bits/stdc++.h>

#define ALL(a) (a).begin(), (a).end()
#define llong long long

using namespace std;

signed main(){
	bool init = false;
	while(true){
		int a, b;cin >> a >> b;
		if(a == 0)break;
		else if(init)cout << endl;
		init = true;
		bool flag = false;
		for(int i = a; i <= b; i++){
			if(i % 4 == 0 && i % 100 != 0){
				flag = true;
				cout << i << endl;
			}
			else if(i % 400 == 0){
				flag = true;
				cout << i << endl;
			}
		}
		if(!flag)cout << "NA" << endl;
	}

	return 0;
}


