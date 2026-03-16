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

	map<char,bool> ball;
	ball['A']=true;
	ball['B']=false;
	ball['C']=false;

	string s;
	while(cin>>s){
		swap(ball[s[0]],ball[s[2]]);
	}

	for(auto it=ball.begin();it!=ball.end();it++){
		if(it->second)  cout<<it->first<<endl;
	}

	return 0;
}