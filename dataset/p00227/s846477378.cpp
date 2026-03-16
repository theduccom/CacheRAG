#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
	int n,m,t;
	
	while(cin >> n >> m){
		if((n|m) == 0) break;
		vector<int> val;
		int ret;
		for(int i=0;i<n;i++){
			cin >> t;
			val.push_back(t);
		}
		sort(val.begin(), val.end(), greater<int>());
		ret = accumulate(val.begin(),val.end(),0);
		for(int i=m-1;i<n;i+=m) ret -= val[i];
		cout << ret << endl;
	}
}