// #define _CRT_SECURE_NO_WARNINGS
// #define _USE_MATH_DEFINES
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <cmath>
#include <cstdlib>
#include <functional>
#include <locale>
#include <cctype>
#include <sstream>
#include <iomanip>	// 10????????? cout << setprecision(10) << double;
using namespace std;

typedef long long LL;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef map<int, int> MAPII;
typedef multimap<int, char, greater<int> > MuMAPIC;
typedef vector<pair<int, int> > VPII;
typedef multimap<int, string, greater<int> > MuMIS;

#define MP make_pair
#define FAST_IO  cin.tie(0); ios::sync_with_stdio(false);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
//for gcc (???test)
// #define FOREACH_IT(it,c) for(typeof(c)::iterator it=(c).begin(); it!=(c).end(); ++it)
//for Visual Studio
#define foreach_it(type,it,c) for(type::iterator it=c.begin(),c_end=c.end();it!=c_end;++it)
// for Debug.
#define DUMP_VVI(b) FOR(i,0,b.size()){FOR(j,0,b[i].size())printf("%d ",b[i][j]);puts("");}
#define D_OUT(str,value) if(dbgF){cout<<str<<" : "<<value<<endl;}
// ??\??????push_back(d)???array[d]???????????????1?????§?????????
// int INPUT_INT() {int d;cin>>d;return d;}
template<class T>T IN(){T d;cin>>d;return d;}
// ?????§??¬?´???°???Greatest Common Divisor???
LL gcd(LL a, LL b){ return (b > 0) ? gcd(b, a%b) : a; }
// ????°???¬?????°???Least Common Multiple???
LL lcm(LL a, LL b){ return a / gcd(a, b) * b; }

// ------------------- include, typedef, define END. -------------------

void Output(VI personNo){
	int maxValue = -1;
	int ansNo = 0;
	FOR(i,0,10001){
		if(maxValue < personNo[i]){
			maxValue = personNo[i];
			ansNo = i;
		}
	}
	cout << ansNo << " " << maxValue << endl;
}

int main(){
	FAST_IO;
	// for D_OUT(str, value)  ... cout<< str <<" : "<< value <<endl;
	bool dbgF = true;
	
	//??????????????????????????????.
	int n=0;
	int p,d1,d2;
	while(cin>>n, n){
		VI personNo(10001,0);
		FOR(i,0,n){
			cin >> p>> d1>> d2;
			personNo[p] = d1 + d2;
		}
		Output(personNo);
	}
	
	return 0;
}