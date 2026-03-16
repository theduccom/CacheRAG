#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<ll,ll> mp;
#define inf 1e9


int main(){
	bool f = true;
	while(1){
	int a,b;
	cin>>a>>b;
	if(a==0)break;
	if(f){
		f = false;
	}else{
		cout<<endl;
	}
	vector<int> ans;
	for(int i=a;i<=b;i++){
		if(i%400==0){
			ans.push_back(i);
		}else if(i%100==0){

		}else if(i%4==0){
			ans.push_back(i);
		}
	}
	if(ans.size()==0){
		cout<<"NA"<<endl;	
	}else{
		for(int i=0;i<ans.size();i++)cout<<ans[i]<<endl;
	}

	}
	return 0;
}

