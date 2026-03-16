#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
	map<int,long long int> mp;
	vector<int> vec;
	int n,now,a;
	long long int b,c;
	while(cin>>n,n){
		now=0;
		mp.clear();
		vec.clear();
		for(int i=0;i<n;i++){
			cin>>a>>b>>c;
			if(!mp[a]){
				vec.push_back(a);
			}
			mp[a]+=b*c;
		}
		for(int i=0;i<vec.size();i++)
			if(mp[vec[i]]>=1000000){
			cout<<vec[i]<<endl;
				now++;
			}
		if(now==0)
		cout<<"NA"<<endl;
	}
	return 0;
}