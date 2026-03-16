#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		int tmp = 0;
		vector<int> ans;
		for(int i = 9; i >= 0; i--){
			if(n - pow(2, i) >= 0){
				ans.push_back(pow(2, i));
				n -= pow(2, i);
			}
		}
		sort(ans.begin(), ans.end());
		for(int i = 0; i < ans.size() - 1; i++){
			cout << ans[i] << " ";
			tmp = i + 1;
		}
		cout << ans[tmp] << endl;
	}
}