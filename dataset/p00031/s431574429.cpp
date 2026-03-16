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
	int n;
	while(cin>>n){

		vector<int> res;
		for(int i=0;i<10;i++){
			if(n & (1<<i)) res.push_back((1<<i));
		}

		for(int i=0;i<res.size()-1;i++) cout<<res[i]<<" ";
		cout<<res[res.size()-1]<<endl;

	}

	return 0;
}