//#pragma once
#include <stdio.h>
#include <string>
#include <iostream>
#include <queue>
#include <algorithm>
#include <sstream>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <numeric>
#include <bitset>
#include <iomanip>
#include <cctype>


using namespace std;
#define modd 1000000007


typedef pair<long long, long long> pl;


typedef string::const_iterator State;
class ParseError {};




#define ll long long




/*
class UnionFind {
public:
	vector <ll> par;
	vector <ll> siz;
	vector <ll> gr;

	// Constructor
	UnionFind(ll sz_) : par(sz_), siz(sz_, 1LL) ,gr(sz_){
		for (ll i = 0; i < sz_; ++i) par[i] = i;
	}
	void init(ll sz_) {
		par.resize(sz_);
		siz.assign(sz_, 1LL);  // resize だとなぜか初期化されなかった
		for (ll i = 0; i < sz_; ++i) par[i] = i; // 初期では親は自分自身
	}

	// Member Function
	// Find
	ll root(ll x) { // 根の検索
		while (par[x] != x) {
			x = par[x] = par[par[x]]; // x の親の親を x の親とする
		}
		return x;
	}

	// Union(Unite, Merge)
	bool merge(ll x, ll y) {
		x = root(x);
		y = root(y);
		if (x == y) return false;

		// merge technique（データ構造をマージするテク．小を大にくっつける）
		if (siz[x] < siz[y]) swap(x, y);
		siz[x] += siz[y];
		par[y] = x;
		return true;
	}



	bool issame(ll x, ll y) { // 連結判定
		return root(x) == root(y);
	}

	ll size(ll x) { // 素集合のサイズ
		return siz[root(x)];
	}


};*/


long long N, M, K, a, b, c, d, e, H, W, L;
ll A[200005] = {};
ll B[200005] = {};
ll C[200005] = {};
bool f, ff;
string S;
set <long long>sll;
pl bufpl;
vector <long long>vl[3];
vector <pl>vpl;
vector <string> vs;
set<ll> llset;

/*struct ST
{
	long long Kati;
	int bangou;

	bool operator<(const ST& another) const
	{
		return Kati < another.Kati;//比較
	};

};



vector <ST> vst;
ST st[200005];
ST bufst;
bitset<5000> bits;*/


long long modinv(long long aa, long long mm) {
	long long bb = mm, uu = 1, vv = 0;
	while (bb) {
		long long tt = aa / bb;
		aa -= tt * bb; swap(aa, bb);
		uu -= tt * vv; swap(uu, vv);
	}
	uu %= mm;
	if (uu < 0) uu += mm;
	return uu;
}



ll minn, maxx;
double ansa;

int expression(State& begin);
int term(State& begin);
int factor(State& begin);
int number(State& begin);


// 四則演算の式をパースして、その評価結果を返す。
int expression(State& begin) {
	int ret = term(begin);

	for (;;) {
		if (*begin == '+') {
			begin++;
			ret += term(begin);
		}
		else if (*begin == '-') {
			begin++;
			ret -= term(begin);
		}
		else {
			break;
		}

	}

	return ret;

}



// 乗算除算の式をパースして、その評価結果を返す。
int term(State& begin) {

	int ret = factor(begin);

	for (;;) {
		if (*begin == '*') {
			begin++;
			ret *= factor(begin);
		}
		else if (*begin == '/') {
			begin++;
			ret /= factor(begin);
		}
		else {
			break;
		}


	}

	return ret;

}


// 括弧か数をパースして、その評価結果を返す。
int factor(State& begin) {
	if (*begin == '(') {
		begin++; // '('を飛ばす。
		int ret = expression(begin);
		begin++; // ')'を飛ばす。
		return ret;
	}
	else {
		return number(begin);
	}
}





// 数字の列をパースして、その数を返す。
int number(State& begin) {
	int ret = 0;

	while (isdigit(*begin)) {
		ret *= 10;
		ret += *begin - '0';
		begin++;

	}

	return ret;

}







int main() {

	cin >> N;
	a= 0;
	cin.ignore();

	while (a < N) {

		string s;

		getline(cin, s);

		State begin = s.begin();

		e = expression(begin);

		cout << e << endl;
		a++;
	}

	return 0;

}

