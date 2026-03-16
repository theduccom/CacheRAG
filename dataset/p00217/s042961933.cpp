#include<iostream>
using namespace std;
int main(){
	while(1){
		int n = 0;
		cin >> n;
		if(n == 0) break;
		int maxNum = -1, maxP;
		for(int i = 0;i < n;i++){
			int p, d1, d2;
			cin >> p >> d1 >> d2;
			if(maxNum < d1 + d2){
				maxNum = d1 + d2;
				maxP = p;
			}
		}
		cout << maxP << ' ' << maxNum << endl;
	}
	return 0;
}