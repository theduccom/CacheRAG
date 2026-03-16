#include<iostream>
using namespace std;

int main(){
	int n;
	int pm, pe, pj;
	while(cin >> n, n){
		for(int i=0; i < n; i++){
			cin >> pm >> pe >> pj;

			if(pm == 100 || pe == 100 || pj == 100) cout << 'A' << endl;
			else if(90 <= (pm + pe) / 2) cout << 'A' << endl;
			else if(80 <= (pm + pe + pj) / 3) cout << 'A' << endl;
			else if(70 <= (pm + pe + pj) / 3) cout << 'B' << endl;
			else if(50 <= (pm + pe + pj) / 3 && (80 <= pm || 80 <= pe)) cout << 'B' << endl;
			else cout << 'C' << endl;
		}
	}
}