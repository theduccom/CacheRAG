//============================================================================
// Name        : TopCoderCompetition.cpp
// Author      : taguchi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <bitset>
#include <algorithm>
#include <map>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <numeric>
#include <list>
using namespace std;
//#define P pair<int,int>
#define max (ull)1000005
typedef unsigned int uint;
typedef long long ll;
typedef unsigned long long ull;
#define rep(i,n) for(ull i = 0;i<n;i++)
#define pb(n) push_back(n)

typedef vector<int> vi;
typedef vector<string> vs;
struct edge{int cost,to;};

vector<string> split(string &in,char delimiter){
	vector<string> re; uint cur = 0,next;
	while((next = in.find_first_of(delimiter,cur)) != string::npos){
		re.pb(string(in,cur,next-cur));
		cur = next + 1;
	}
	re.pb(string(in,cur,in.size()-cur));
	return re;
}
vector<int> split_int(string &in, char delimiter){
	vector<string> str = split(in,delimiter);
	vector<int> re;
	rep(i,str.size()){
		re.pb(strtol(str[i].c_str(),NULL,10));
	}
	return re;
}

class Range{
public:
	int a,b;
	Range(int an,int bn) : a(an),b(bn){}

	bool operator()(int n){
		return a<=n&&n<=b;
	}
	bool isCross(Range x){
		return x(a) || x(b);
	}
	bool contains(Range x){
		return this->a <= x.a && x.b <= this->b;
	}
};

class RangeHandler{
public:
	list<Range> Ranges;

	bool insert(Range x){
		if(Ranges.empty()){
			Ranges.push_back(x);
			return true;
		}

		if(x.b <= Ranges.front().a){
			Ranges.push_front(x);
			return true;
		}
		if(Ranges.back().b <= x.a){
			Ranges.push_back(x);
			return true;
		}
		for(list<Range>::iterator i = Ranges.begin();i != Ranges.end();i++){
			list<Range>::iterator l = i;
			l++;
			//cout << "dbg" << i->b << " " << i->a << endl;
			if(Range(i->b,l->a).contains(x)){
				Ranges.insert(l,x);
				return true;
			}
		}
		return false;
	}
};
int main(){
	bitset<max> primeTable;
	primeTable.set();
	for(uint i = 2;i<max;i++){
		if(primeTable[i])
		for(uint j = i;j*i<max;j++){
			primeTable[i*j] = false;
		}
	}
	while(true){
		ull n,x;
		ull foods[30];
		cin >> n >> x;
		if(n == 0 && x == 0) break;
		rep(i,n){
			cin >> foods[i];
		}

		bitset<max> makeable;
		makeable.reset();
		makeable[0] = true;
		rep(k,n)
		rep(i,max){
			if(makeable[i] && i + foods[k] <= x){
				makeable[i + foods[k]] = true;
			}
		}
		int result = 0;
		for(uint i = x;i>=0;i--){
			if(makeable[i] && primeTable[i]){
				result = i;break;
			}
		}
		if(result != 0)
			cout << result << endl;
		else cout << "NA" << endl;
	}
	return 0;
}