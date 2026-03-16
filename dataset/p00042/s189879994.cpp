#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

int main(void){
	int i,j;
	int n,tmp;
	vector<int> v,w;
	int max_w;
	int cur=0,nxt=1;
	int dp[2][1001];
	int dpw[2][1001];
	int index=0;
	int tmp_max = 0;
	int max_weight = 1 << 30;
	int casenum = 1;
	
	while(cin >> max_w){
		if(max_w == 0) break;
		memset(dp, 0, sizeof(dp));
		memset(dpw, 0, sizeof(dpw));
		cur = 0;
		nxt = 1;
		cin >> n;
		for(i=0;i<n;i++){
			cin >> tmp;
			v.push_back(tmp);
			cin.ignore();
			cin >> tmp;
			w.push_back(tmp);
		}
		//f[^ÇÝÝ±±ÜÅ
		
		/*
		*  dp[i+1][j] := iÔÚÜÅÅd³jÉµ½Æ«ÌÅåÌ¿l
		*  dp[i+1][j] = max(dp[i][j], dp[i][j-w[i]] + v[i]) if(j > w[i])
		*  dp[i+1][j] = dp[i][j]
		*/
		for(i=0;i<n;i++){
			for(j=0;j<=max_w;j++){
				if(j >= w[i]){
					dp[nxt][j] = max(dp[cur][j], dp[cur][j-w[i]] + v[i]);
					if(dp[nxt][j] == dp[cur][j]){
						dpw[nxt][j] = dpw[cur][j];
					}else{
						dpw[nxt][j] = dpw[cur][j-w[i]] + w[i];
					}
				}else{
					dp[nxt][j] = dp[cur][j];
					dpw[nxt][j] = dpw[cur][j];
				}
				//cout << dpw[nxt][j] << " ";
				if(tmp_max < dp[nxt][j]){
					tmp_max = dp[nxt][j];
					max_weight = dpw[nxt][j];
					//cout << "max_weight = " << max_weight << endl;
				}else if(tmp_max == dp[nxt][j]){
					max_weight = min(max_weight, dpw[nxt][j]);
				}
			}
			nxt = 1 - nxt; //toggle
			cur = 1 - cur; //toggle
			//cout << endl;
		}
		
		cout << "Case " << casenum++ << ":"<<endl;
		cout << dp[cur][max_w] << endl;
		if(tmp_max == 0){
			cout << 0 << endl;
		}else{
			cout << max_weight << endl;
		}
		v.clear();
		w.clear();
		index = 0;
		tmp_max=0;
		max_weight = 1 << 30;
	}
	
	
}