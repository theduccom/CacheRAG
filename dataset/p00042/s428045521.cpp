// 2014/09/13 Tazoe

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
	for(int I=1; ; I++){
		int W;
		cin >> W;

		if(W==0)
			break;

		int DP[1001] = {0};

		int N;
		cin >> N;

		for(int i=0; i<N; i++){
			string s;
			cin >> s;

			for(int j=0; j<s.size(); j++){
				if(s[j]==','){
					s[j] = ' ';
					break;
				}
			}

			istringstream is(s);
			int v, w;
			is >> v >> w;

			for(int j=W; j-w>=0; j--){
				DP[j] = max(DP[j], DP[j-w]+v);
			}
		}

		int V_max = DP[W];
		int W_max = W;
		for(int i=W-1; i>=0; i--){
			if(DP[i]>=V_max){
				V_max = DP[i];
				W_max = i;
			}
		}

		cout << "Case " << I << ":" << endl;
		cout << V_max << endl;
		cout << W_max << endl;
	}

	return 0;
}