#include <iostream>
#include <algorithm>

using namespace std;

struct itm{
	int val;
	int wht;
};

int main()
{
	int w, n, dp[1001], s, t, c=1;
	itm it[1000];
	
	while(cin >> w && w){
		cout << "Case " << c++ << ":" << endl;
		fill(dp, dp+1001, 0);
		cin >> n;
		for(int i = 0; i < n; i++){
			scanf("%d,%d",&it[i].val,&it[i].wht);
		}
		
		for(int i = 0; i < n; i++){
			for(int j = w; j >= it[i].wht; j--){
				if(j >= it[i].wht){
					dp[j] = max(dp[j], dp[j-it[i].wht]+it[i].val);
				}
			}
		}
		s = t = 0;
		for(int i = 0; i <= w; i++){
			if(dp[i] > s){
				s = dp[i];
				t = i;
			}
		}
		
		cout << s << endl << t << endl;
	}
	
	return 0;
}