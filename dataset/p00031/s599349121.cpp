#include <bits/stdc++.h>
using namespace std;

typedef complex<double> P;

int main(){
	int n;
	while(cin>>n){
		bool f = true;
		for(int i = 0 ; i < 10 ; i++){
			if( !(n>>i&1) ) continue;
			if(!f) cout << " ";
			cout << (1<<i);
			f = false;
		}
		cout << endl;
	}
			
}