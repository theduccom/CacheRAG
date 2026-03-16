#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

int main(){
	vector<pair<int,long long> > v;
	int n,a;
	long long b,c;
	while(cin>>n&&n){
		v.clear();
		while(n--){
			cin>>a>>b>>c;
			int index = -1;
			for(int i=0;i<v.size();i++){
				if(a==v[i].first){
					index = i;
					break;
				}
			}
			if(index==-1)v.push_back(make_pair(a,b*c));
			else v[index].second += b*c;
		}
		bool flag = false;
		for(int i=0;i<v.size();i++){
			if(v[i].second >= 1000000){
				flag = true;
				cout<<v[i].first<<endl;
			}
		}
		if(!flag)cout<<"NA\n";
	}
	return 0;
}