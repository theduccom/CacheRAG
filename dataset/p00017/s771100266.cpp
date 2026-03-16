#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>
#include <functional>
#include <array>
#include <stack>
#include <queue>
#include <chrono>
#include <numeric>
#include <memory.h>
#include <map>
#include <math.h>
#include <utility>
#include <set>

#pragma warning(disable:4996)
using namespace std;
#define REP(i,n) for(int i = 0 ; i < n ; ++i)
typedef long long Int;
const double PI = 3.141592653589793238;
const Int INF = 999999999999;
typedef pair<int, int> P;


int main()
{
	string a;

	auto s = string::npos;
	while (getline(cin, a)){
		REP(i, 26){
			for (auto& x : a){
				if (x<'a' || x>'z'){
					continue;
				}
				++x;
				if (x > 'z')x = 'a';
			}
			if (a.find("this") != s || a.find("the") != s || a.find("that") != s)
				cout << a << endl;
		}
	}
	return 0;
}