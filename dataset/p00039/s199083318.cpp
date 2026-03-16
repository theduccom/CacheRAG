#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
#include <cstring>
#include <climits>
using namespace std;
static const double EPS = 1e-5;
typedef long long ll;

map<char,int> hyo;

main(){
	hyo['I']=1;
	hyo['V']=5;
	hyo['X']=10;
	hyo['L']=50;
	hyo['C']=100;
	hyo['D']=500;
	hyo['M']=1000;
	
	string in;
	while(cin>>in){
		int i=0;
		int sum=0;
		for(int i=0;i<in.size();i++){
			if(i+1==in.size()){
				sum+=hyo[in[i]];
				continue;
			}
			if(hyo[in[i]]<hyo[in[i+1]]){
				sum+=hyo[in[i+1]]-hyo[in[i]];
				++i;
			}else{
				sum+=hyo[in[i]];
			}
		}
		cout<<sum<<endl;
	}
}