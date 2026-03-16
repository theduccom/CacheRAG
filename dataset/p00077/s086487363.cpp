#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <map>
#include <utility>
using namespace std;

#define FOR(i,a,b) for(long long int i=(a);i<(b);i++)
#define REP(i,N) for(long long int i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()

typedef long long ll;

#define PI acos(-1.0);

string s;

int main(){
	while (cin >> s){
		REP(i, s.size()){
			if (s[i] != '@'){
				cout << s[i];
			}
			else{
				int a = s[i + 1] - '0';
				REP(j, a){
					cout << s[i + 2];
				}
				i += 2;
			}
		}
		cout << endl;
	}
}