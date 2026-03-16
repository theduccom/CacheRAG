// 0227
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	while(1){
		int n, m;
		vector<int> ve;

		cin>>n>>m;
		if((n == 0) && (m == 0 ))
			break;

		for(int i=0;i<n;i++){
			int c;
			cin>>c;
			ve.push_back(c);
		}

		sort(ve.begin(), ve.end());

		int cost = 0;
		for(int i=1;i<=n;i++)
			if(i%m != 0)
				cost += ve[n-i];
		
		cout<<cost<<endl;
	}
	return 0;
}