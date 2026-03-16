#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	while(scanf("%d", &N) != EOF){
		vector<int> ans;
		for(int i = 0; i < 10; i++){
			if(N & (1 << i)){
				ans.push_back((1 << i));
			}
		}
		for(int i = 0; i < ans.size(); i++){
			cout << ans[i];
			if(i == ans.size() - 1) cout << endl;
			else cout << " ";
		}
	}
	return 0;
}