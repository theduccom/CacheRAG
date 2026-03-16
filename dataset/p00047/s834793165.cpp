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

#define PI 3.14159265358479

typedef long long ll;

string s;
char c = 'A';

int main(){
	while (cin >> s){
		REP(i, s.size()){
			if (s[i] == c){
				if (i == 0){
					c = s[2];
				}
				else{
					c = s[0];
				}
				break;
			}
		}
	}
	cout << c << endl;
}