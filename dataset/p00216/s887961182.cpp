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

int UsedWater(int w){
	int ret=1150;

	FOR(i,0,w){
		if(i<10)	ret += 0;
		else if(i<20)	ret += 125;
		else if(i<30)	ret += 140;
		else ret +=160;
	}

	return ret;
}

int main(){
	FAST_IO;
	// for D_OUT(str, value)  ... cout<< str <<" : "<< value <<endl;
	bool dbgF = false;
	
	//??????????????????????????????.
	int w=0;
	while(cin>>w,w!=-1){
		int kongetsu = UsedWater(w);
		D_OUT("?????????",kongetsu);
		cout << (4280 - kongetsu) << endl;
	}
	
	return 0;
}