#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef long long ll;

int main(){

	int n;
	while(cin>>n&&n!=0){
//		vector<pair<int,int> > v;
		ll info[4001];
		bool appeared[4001];
		fill(info,info+4001,0);
		fill(appeared,appeared+4001,false);
		vector<int> numList;
		for(int i = 0; i < n; i++){
			int num;
			int val;
			int ko;
			cin>>num>>val>>ko;
			if(!appeared[num]){
				appeared[num]=true;
				numList.push_back(num);
			}

			info[num]+=((ll)val)*ko;
		}

		bool f=false;
		for(int i = 0; i < numList.size(); i++){
			if(info[numList[i]]>=1000000){
				cout<<numList[i]<<endl;
				f=true;
			}
		}
		if(!f)
			cout<<"NA"<<endl;
	}

	return 0;
}