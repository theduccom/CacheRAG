#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstdio>
#include <string>
#include <cmath>
#include <cfloat>
#include <map>
using namespace std;
int main(){
	
	int n;
	
	while(cin>>n,n!=0){
		long long a,b,c;
		int f=0;
		map<int,long long> s;
			vector<int> d;
		
		for(int i=0;i<n;i++){
		
			cin>>a>>b>>c;
			if(!s[a])d.push_back(a);
			s[a]+=b*c;
		}
		for(int i=0;i<d.size();i++){
			if(s[d[i]]>=1000000){
				cout<<d[i]<<endl;
				f=1;
			}
			
		}
		if(f!=1)
			cout<<"NA"<<endl;
	
	}
	
}