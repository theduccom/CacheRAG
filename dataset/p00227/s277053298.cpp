#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	int n,m;
	while(cin>>n>>m&&!(n==0&&m==0)){
		int num=n/m;
		vector<int> v;
		for(int i = 0; i < n; i++){
			int t;
			cin>>t;
			v.push_back(t);
		}
		sort(v.begin(),v.end(),greater<int>());

		int sum=0;
		for(int i = 0; i < n; i++){
			if((i+1)%m==0){

			}
			else
				sum+=v[i];
		}
		cout<<sum<<endl;
	}

	return 0;
}