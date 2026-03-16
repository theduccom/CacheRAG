#include <string>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <queue>
#include <set>
#include <utility>
#include <algorithm>
#include <numeric>
#include <iostream>
#include <iterator>
#include <sstream>

using namespace std;

int main()
{
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		sort(s.begin(),s.end(),greater<char>());
		int m,n;
		sscanf(s.c_str(),"%d",&m);
		sort(s.begin(),s.end(),less<char>());
		sscanf(s.c_str(),"%d",&n);
		cout << abs(m-n) << endl;
	}

	return 0;
}