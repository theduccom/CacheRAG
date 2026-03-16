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
	int t;
	string s;
	cin>>t;
		getline(cin,s);
	while(t--){
		getline(cin,s);
		int x;
		while((x = s.find("Hoshino")) != string::npos){
			s[x+6] = 'a';
		}
		cout << s << endl;
	}
    return 0;
}