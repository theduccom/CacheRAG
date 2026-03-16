#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	vector<int> a;
	while(cin>>n){
		if(n>=512){
			n-=512;
			a.push_back(512);
		}
		if(n>=256){
			n-=256;
			a.push_back(256);
		}
		if(n>=128){
			n-=128;
			a.push_back(128);
		}
		if(n>=64){
			n-=64;
			a.push_back(64);
		}
		if(n>=32){
			n-=32;
			a.push_back(32);
		}
		if(n>=16){
			n-=16;
			a.push_back(16);
		}
		if(n>=8){
			n-=8;
			a.push_back(8);
		}
		if(n>=4){
			n-=4;
			a.push_back(4);
		}
		if(n>=2){
			n-=2;
			a.push_back(2);
		}
		if(n==1){
			a.push_back(1);
		}
		sort(a.begin(),a.end());
		cout<<a[0];
		for(int i=1;i<a.size();i++){
			cout<<" "<<a[i];
		}
		cout<<endl;
		a.clear();
	}
	return 0;
}

