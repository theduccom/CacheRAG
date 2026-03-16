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
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <numeric>
#include <list>
#include <sstream>
using namespace std;
//#define P pair<int,int>
//#define max 999999
typedef unsigned int uint;
typedef unsigned long ul;
typedef long long ll;
typedef unsigned long long ull;
#define rep(i,n) for(ull i = 0;i<n;i++)
#define pb(n) push_back(n)
#define clear(n) memset(n,0,sizeof(n))

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


int main(){
	bitset<50020> primes;
	int indexpri[40000];
	memset(indexpri,0,sizeof(indexpri));
	int cnt = 0;
	primes.set();
	for(ul i = 2;i<50020;i++){
		if(primes[i]){
			indexpri[cnt++] = i;
			for(ul j = 2;j*i<50020;j++){
				primes[j*i] = false;
			}
		}
	}
	primes[1] = false;primes[0] = false;
	int results[50020];
	memset(results,0,sizeof(results));
	for(int n = 4;n<=50000;n++){

	}
	while(1){
		int n;
		cin >> n;
		if(n == 0)break;
		if(n % 2 == 1){
			if(binary_search(indexpri,indexpri+cnt,n-2)){
				cout << 1 << endl;
				continue;
			}
		}
		for(int i = 0;i<cnt && n-indexpri[i] > 0;i++){
			if(binary_search(indexpri,indexpri+i+1,n - indexpri[i])) results[n]++;
		}
		cout << results[n] << endl;
	}

	return 0;
}