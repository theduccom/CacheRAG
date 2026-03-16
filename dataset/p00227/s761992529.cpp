#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int m,p,tmp;
	while(cin >> m >> p && m!=0){
		vector<int> v;
		int sum=0;
		for(int i=0;i<m;i++){
			cin >> tmp;
			v.push_back(tmp);
		}
		sort(v.begin(),v.end());
		int mods=m%p;
		for(int i=0;i<mods;i++)
		sum+=v[i];
		for(int i=mods;i<v.size();i++){
			if((i-mods)%p==0);
			else
				sum+=v[i];
		}
		cout << sum << endl;
	}
	return 0;
}