#include <bits/stdc++.h>

using namespace std;

int main(){
	int water;
	while(cin >> water){
		int ans = 1150;
		if(water == -1) break;
		int i = 10;
		while(water != i){
			if(water < 10) break;
			if(i < 20){
				ans += 125;
				++i;
			}
			else if(i >= 20 && i < 30){
				ans += 140;
				++i;
			}
			else if(i >= 30){
				ans += 160;
				++i;
			}
		}
		cout << 4280 - ans << endl;
 	}
	return 0;
}