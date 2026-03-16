#include<iostream>
using namespace std;

int main(){
	while(1){
		int n;
		cin >> n;
		if(n == 0) break;
		int ans[10] = {0};
		for(int i = 0;i < n;i++){
			int k;
			cin >> k;
			ans[k]++;
		}
		for(int i = 0;i < 10;i++){
			for(int j = 0;j < ans[i];j++) cout << '*';
			if(ans[i] == 0) cout << '-';
			cout << endl;
		}
	}
	return 0;
}