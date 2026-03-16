// #define _CRT_SECURE_NO_WARNINGS
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
#include <sstream>	// istringstream
using namespace std;

typedef long long LL;
typedef vector<int> VI;
typedef vector<VI> VVI;

#define MP make_pair
#define fastIO	cin.tie(0); ios::sync_with_stdio(false);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
//for gcc (未test)
// #define FOREACH_IT(it,c)	for(typeof(c)::iterator it=(c).begin(); it!=(c).end(); ++it)
//for Visual Studio
#define foreach_it(type,it,c) for(type::iterator it=c.begin(); it!=c.end(); ++it)

// #defineの初利用にあたって参考にした http://peroon.hatenablog.com/entry/20091123/1258966199
// iteratorのforLoop                   http://bokko.hatenablog.com/entry/20090320/1237494217
// fastIO                              https://gist.github.com/rigibun/7905920

void solveAndOutput(map<int, long long> data, VI bangouList){
	bool flag = true;

	FOR(i, 0, bangouList.size()){
		if (data[bangouList[i]] >= 1000000){
			cout << bangouList[i] << endl;
			flag = false;
		}
	}
	if (flag)
		cout << "NA" << endl;
}

int main(){
	// sankou http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=97994#1

	long long n;
	// 重複なし、自動ソート
	map<int, long long> data;
	// 重複あり、ソートなし -> 重複するものは格納しないようにしたい.
	VI bangouList;
	fastIO;

	while (cin >> n, n){
		data.clear();
		bangouList.clear();
		while (n--){
			// int bangou = 0, tanka = 0, suu = 0;
			long long int bangou = 0, tanka = 0, suu = 0;
			cin >> bangou >> tanka >> suu;
			if(data[bangou] == 0)
				bangouList.push_back(bangou);
			// tankaとsuuがintだと、両方の値が大きいときにオーバーフローする
			data[bangou] += (tanka * suu);
		}
		solveAndOutput(data, bangouList);
	}
	return 0;
}