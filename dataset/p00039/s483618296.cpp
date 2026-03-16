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
	string s;

	map<char,int> trans;
	trans['I']=1;
	trans['V']=5;
	trans['X']=10;
	trans['L']=50;
	trans['C']=100;
	trans['D']=500;
	trans['M']=1000;

	while(cin>>s){
		long res=0;
		for(int i=0;i<s.size()-1;i++){
			if(trans[s[i]]>=trans[s[i+1]]) res+=trans[s[i]];
			else res-=trans[s[i]];
		}
		res+=trans[s[s.size()-1]];
		cout<<res<<endl;
	}


	return 0;
}