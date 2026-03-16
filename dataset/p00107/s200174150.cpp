#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int a[3];
	while(cin >> a[0] >> a[1] >> a[2]){
		if(a[0] == 0 && a[1] == 0 && a[2] == 0) break;
		sort(a, a+3);
		int n;
		cin >> n;
		for(int i = 0; i < n; i++){
			int r;
			cin >> r;
			if((a[0] * a[0] + a[1] * a[1]) < r * r * 4) cout << "OK" << endl;
			else cout << "NA" << endl;
		}
	}
	return 0;
}