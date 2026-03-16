#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

int calc(char c){
	if(c=='I')return 1;
	if(c=='V')return 5;
	if(c=='X')return 10;
	if(c=='L')return 50;
	if(c=='C')return 100;
	if(c=='D')return 500;
	if(c=='M')return 1000;
	return 0;
}

int main(){
	string s;
	//vector<int> n;
	//int ans;
	while(cin>>s){
		int ans=0;
		vector<int> n;

		for(int i=0; i<s.size(); i++){
			n.push_back(calc(s.at(i)));
		}
		for(int i=0; i<n.size(); i++){
			if(i<n.size()-1){
				if(n[i]<n[i+1])ans-=n[i];
				else ans+=n[i];
			}
			else{
				ans+=n[i];
			}
			//cout<<n[i]<<" "<<ans<<endl;
		}
		cout<<ans<<endl;
	}


}