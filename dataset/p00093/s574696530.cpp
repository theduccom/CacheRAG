#define _USE_MATH_DEFINES
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <cfloat>
#include <ctime>
#include <cassert>
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
#include <numeric>
#include <list>
#include <iomanip>
#include <iterator>

using namespace std;

typedef long long ll;
typedef pair<int,int> Pii;
typedef pair<ll,ll> Pll;

 
int main(){
	int a,b;
	bool c = false;
	while(cin>>a>>b,(a||b)){
		if(c) cout << endl;
		bool ok = false;
		for (int i = a; i <= b; i++){
			if(i % 4 == 0 && (i % 100 != 0 || i % 400 == 0)){
				cout << i << endl;
				ok = true;
			}
		}
		if(!ok) cout << "NA" << endl;
		c = true;
	}
    return 0;
}