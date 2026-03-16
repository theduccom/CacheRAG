#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <functional>
#include <set>
#include <sstream>
#include <map>
 
using namespace std;
 
const double eps=1e-10;

int main()
{

	vector<long long> prime,ans(10000,0);
	prime.push_back(2);
	prime.push_back(3);
	prime.push_back(5);

	for(int i=7;prime.size()<12000;i+=2){
		bool ok=true;
		for(int j=0;prime[j]*prime[j]<=i && ok;j++){
			if(i%prime[j]==0) ok=false;
		}
		if(ok) prime.push_back(i);

//		cout<<prime.size()<<":"<<prime.back()<<endl;
	}

	ans[0]=prime[0];
	for(int i=1;i<10000;i++) ans[i]=prime[i]+ans[i-1];

	int n;
	while(cin>>n,n){
		cout<<ans[n-1]<<endl;
	}


	return 0;
}