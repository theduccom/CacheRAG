#include <bits/stdc++.h>
using namespace std;

bool is_leap(int x){
	if(x%400==0) return true;
	if(x%100==0) return false;
	if(x%4==0) return true;
	return false;
}

int main(){
	bool first = true;
	int a,b;
	while(cin>>a>>b,a||b){
		bool ok=false;
		if(!first) cout<<endl;
		first=false;
		for(int i=a;i<b+1;i++){
			if(is_leap(i)){
				cout<<i<<endl;
				ok=true;
			}
		}
		if(!ok){
			cout<<"NA"<<endl;
		}
	}
}