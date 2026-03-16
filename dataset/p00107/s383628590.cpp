#include <iostream>
#include <algorithm>
using namespace std;

int x[3],n;

int main(){
	while(cin >> x[0] >> x[1] >> x[2]){
		if(x[0]==0&&x[1]==0&&x[2]==0) break;
		sort(x,x+3);
		cin >> n;
		for(int i = 0; i < n; i++){
			int r; cin >> r;
			if(4*r*r > x[0]*x[0]+x[1]*x[1]) cout << "OK" << endl;
			else cout << "NA" << endl;
		}
	}
}