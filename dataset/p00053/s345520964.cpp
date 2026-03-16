#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>

using namespace std;


vector<int> p;

bool is_p(int n){
	if(n<=1)return false;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0)return false;
	}
	return true;
}
void make_p(){
	int i=2;
	while(1){
		if(is_p(i))p.push_back(i);
		i++;
		if(p.size()==10000)break;
	}
}



int main(){
	int m;
	make_p();
	while(1){
		long long int ans=0;
		cin>>m;
		if(m==0)break;
		for(int j=0; j<m; j++){
			ans+=p.at(j);
		}
		cout<<ans<<endl;
	}
}