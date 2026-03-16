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
using namespace std;
static const double EPS = 1e-5;
typedef long long ll;


int kakaku(int n){
	int value=1150;

	n-=10;
	if(n>0)value+=125*n;
	n-=10;
	if(n>0)value+=15*n;
	n-=10;
	if(n>0)value+=20*n;
	return value;
}

int main(){
	int sui,sen,kon;
	

	sen=4280;
	
	
	while(cin>>sui){
		if(sui==-1)break;
		kon=kakaku(sui);
		cout<<sen-kon<<endl;

	}
	return 0;
}