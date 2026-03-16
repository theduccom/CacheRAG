#include <iostream>
using namespace std;
#define MAX 50004
#define MAXL 3000
int dp[MAX], d[MAX];

int main(){
	int n, m = 0;
	static bool c[MAX]={true, true};
	for(int i = 2;i < MAX;i++){
		if(!c[i]){
			for(int j = 2;i*j < MAX;j++)c[i*j] = true;
			d[m++] = i;
		}
	}
	
	for(int i = 0;i < MAXL;i++)
		for(int j = i;d[i]+d[j] < MAX-3;j++)
			dp[d[i] + d[j]]++;
	while(cin >> n, n)cout << dp[n] << endl;
	return 0;
}