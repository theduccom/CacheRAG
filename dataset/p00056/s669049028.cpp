#include <iostream>
using namespace std;
typedef long long ll;
#define MAX 50004
int dp[MAX], d[MAX];

int main(){
	int n, m = 0;
	static bool c[MAX]={true, true};
	for(ll i = 2;i < MAX;i++){
		if(!c[i]){
			for(ll j = 2;i*j < MAX;j++)c[i*j] = true;
			d[m] = i;m++;
		}
	}
	int f = 1;
	//for(int i = 2990;i < 3000;i++)cout << d[i] << " ";
	for(int i = 0;i < 3000;i++){
		for(int j = i;d[i]+d[j] < MAX-3;j++){
			int dd = d[i] + d[j];
			dp[dd]++;
			//if(d[i] + d[j] == 2)cout << "fuck";
		}
	}
	//for(int i = 0;i < 30;i++)cout << dp[i] << " ";
	
	while(cin >> n, n){
		cout << dp[n] << endl;
	}
	return 0;
}