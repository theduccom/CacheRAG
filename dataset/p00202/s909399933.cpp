#include<bits/stdc++.h>
using namespace std;
vector <bool> sosu(1000010,true);
void a(){
	sosu[1] = false;
	for(int i = 2; i < 1000010; i++){
		if(sosu[i] == true)
			for(int j = 2; i*j < 1000010; j++){
				sosu[i * j] = false;
			}
	}
}

int main(){
	int n,x;
	a();
	while(cin >> n >> x, n){
		bool dp[1000010] = {0};
		dp[0] = true;
		int v[n];
		for(int i = 0; i < n; i++)
			cin >> v[i];
		sort(v,v + n);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < 1000010; j++){
				if(dp[j] == true && j + v[i] < 1000010)
					dp[j + v[i]] = true;
					
			}
		}
		int judge = true;
		for(int i = x; i != 1; i--)
			if(dp[i] == true && sosu[i] == true){
				cout << i << endl;
				judge = false;
				break;
			}
		if(judge)
			cout << "NA" << endl;
	}
	return 0;
}