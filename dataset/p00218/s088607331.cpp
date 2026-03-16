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


int main(){
	int n;
	
	while(cin>>n){
		if(n==0)break;
		
		for(int i=0;i<n;i++){
			int pm,pe,pj;
			cin>>pm>>pe>>pj;
			
			if(pm==100 || pe==100 || pj==100)puts("A");
			else if(pe+pm>=180)puts("A");
			else if(pe+pm+pj>=240)puts("A");
			else if(pe+pm+pj>=210)puts("B");
			else if(pe+pm+pj>=150 && (pe>=80 || pm>=80))puts("B");
			else puts("C");
		}
	}
	return 0;
}