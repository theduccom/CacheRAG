#include <iostream>
#include <vector>
#include <map>
using namespace std;
int find(vector<pair<int,long long> > &in,int n){
	for(int i=0;i<in.size();++i){
		if(in[i].first==n) return i;
	}
	return -1;
}
int main(){
	int n,num,price,amount;
	while(cin>>n&&n){
		vector<pair<int,long long> > v;
		while(n--){
			cin>>num>>price>>amount;
			if(find(v,num)!=-1) v[find(v,num)].second+=(long long)price*amount;
			else v.push_back(make_pair(num,(long long)price*amount));
		}
		bool f=false;
		for(vector<pair<int,long long> >::iterator it=v.begin();it<v.end();++it){
			if((*it).second>=1000000){
				cout<<(*it).first<<"\n";
				f=true;
			}
		}
		if(!f) cout<<"NA\n";
	}
	return 0;
}