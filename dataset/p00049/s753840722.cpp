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
	map<long long,bool> bt;
	map<string,long long> ans;

	int num;
	char dummy;
	string type;
	while(cin>>num>>dummy>>type){
		if(!bt[num]){
			bt[num]=true;
			ans[type]++;
		}
	}

	cout<<ans["A"]<<endl<<ans["B"]<<endl<<ans["AB"]<<endl<<ans["O"]<<endl;

	return 0;
}