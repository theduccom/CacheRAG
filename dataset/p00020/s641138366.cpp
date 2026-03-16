#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <map>
#include <numeric>
using namespace std;

#define FOR(i,a,b) for(long long int i=(a);i<(b);i++)
#define REP(i,n) for(long long int i=0;i<(n);i++)
#define ALL(s) (s).begin(),(s).end()

#define PI 3.14159265358479

typedef long long ll;
typedef vector<long long int> vi;
typedef vector<long long int>::iterator vit;

int main(){
	int c = 0;
	string s;
	getline(cin, s);
	REP(i, s.size()){
		if (s[i] >= 'a'&&s[i] <= 'z'){
			s[i] += 'A' - 'a';
		}
	}
	cout << s << "\n";
}