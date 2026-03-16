#include<iostream>
#include<map>
#include<vector>
#include<queue>
#include<algorithm>
#include<functional>
using namespace std;

int main(){
	int N;
	
	while(cin>>N,N){
		map<int,long long int> mp;
		vector <int> vi;
		int cnt=0;
		for(int i=0;i<N;i++){
			long long int num,tanka,suuryo;
			cin>>num>>tanka>>suuryo;
			if(mp[num]==0){
				vi.push_back(num);
			}
			mp[num]+=tanka*suuryo;
		}
		vector<int>::iterator it=vi.begin();
		for(;it!=vi.end();it++){
			if(mp[*it]>=1000000){
				cout<<*it<<endl;
				cnt++;
			}
		}
		if(cnt==0){
			cout<<"NA"<<endl;
		}
	}
	return 0;
}