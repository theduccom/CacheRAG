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

	vector<int> prime;
	prime.push_back(2);
	prime.push_back(3);
	prime.push_back(5);

	for(int i=7;i<=60000;i+=2){
		bool ok=true;
		for(int j=0;prime[j]*prime[j]<=i && ok;j++){
			if(i%prime[j]==0) ok=false;
		}
		if(ok) prime.push_back(i);
//		if(ok) cout<<i<<endl;
	}

	int n;
	while(cin>>n){

		auto u=upper_bound(prime.begin(),prime.end(),n);
		auto l=u-1;

		if(*l==n) l--;

		cout<<*l<<" "<<*u<<endl;

	}


	return 0;
}