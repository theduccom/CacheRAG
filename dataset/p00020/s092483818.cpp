#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <math.h>
#include <functional>
#include <algorithm>

typedef long long Int;
#define REP(i,n) for(int i = 0 ; i < n ; ++i)
using namespace std;

int main(){
	string a;
	getline(cin, a);
	transform(a.cbegin(), a.cend(), a.begin(), ::toupper);
	cout << a << endl;
	return 0;
}