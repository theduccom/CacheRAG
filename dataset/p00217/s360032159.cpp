#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int d1, d2,number, maxu = 0,maxn = 0,  kai;
	cin >> kai;
	while (kai != 0){
		for (int i = 0; i < kai; i++){
			cin >> number >> d1 >> d2;
			if (maxu < d1 + d2){
				maxu = d1 + d2;
				maxn = number;
			}
		}
		cout << maxn << " " << maxu << endl;
		maxu = maxn = 0;
		cin >> kai;
	}
	return 0;
}