#include<iostream>
using namespace std;
int main(){
	while(1){
		int w = 0;
		cin >> w;
		if(w == -1) break;
		int nums[3] = {125,140};
		int ans = 1150;
		for(int i = 1;i <= 2;i++){
			if(w >= 10 * i) ans += min(w - (10 * i), 10) * nums[i - 1];
		}
		if(w >= 30) ans += (w - 30) * 160;
		cout << 4280 - ans << endl;
	}
	return 0;
}