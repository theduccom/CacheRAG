#include <iostream>
#include <math.h>
#include <cstdio>
#include <algorithm>
#include <string>
#include <string.h>
using namespace std;

const int MAX_N=1000, MAX_U=1000;
int u,n,v,w;
int dp[MAX_U+1];
int res_w[50],res_v[50];
int c=1;

int main(){
	while(cin >> u,u){		
		cin >> n;
		memset(dp, 0, sizeof(dp));

		for(int i=0;i<n;i++){
			scanf("%d,%d", &v,&w);
			for(int j=u;j>=0;j--) if(j-w>=0) dp[j] = max(dp[j], dp[j-w]+v);
		}
		
		int tmp = u;
		for(int i=u;i>=0;i--) if(dp[i]>=dp[tmp]) tmp=i;
		
		cout << "Case " << c << ":" << endl;
		cout << dp[tmp] << endl << tmp << endl;
		c++;
	}
	
	return 0;
}