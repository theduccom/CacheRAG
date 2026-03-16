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
#include <set>
#include <utility>
#include <sstream>
#include <complex>
#include <fstream>

using namespace std;

#define FOR(i,a,b) for(long long i=(a);i<(b);i++)
#define REP(i,N) for(long long i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define fi first
#define se second

#define PI acos(-1.0)
#define INF 1000000007
#define MOD 1000000007
#define EPS 1e-10
#define MAX_N 100100
#define MAX_M 100100

typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<double, double> PD;
typedef pair<string, ll> PS;
typedef vector<ll> V;
typedef pair<P, char> PC;
typedef pair<ll, string> PLS;

int n;
string s;

int changei(string t){
	int res;
	stringstream ss;
	ss << t;
	ss >> res;
	return res;
}

string changes(int num){
	string res;
	stringstream ss;
	ss << num;
	ss >> res;
	return res;
}

string s_calc(string t){
	string res = t;
	REP(i, res.size()){
		if (res[i] == '*' || res[i] == '/'){
			int num1, pos1, pos2, size1, size2;
			for (int j = i - 1;; j--){
				if (res[j] == '+' || res[j] == '-' || res[j] == '*' || res[j] == '/'){
					if (j != 0){
						size1 = res.substr(j + 1, i - j - 1).size();
						num1 = changei(res.substr(j + 1, i - j - 1));
					}
					else{
						pos1 = j;
						size1 = i;
						num1 = changei(res.substr(0, i));
					}
					break;
				}
				if (j == 0){
					pos1 = j;
					size1 = res.substr(0, i).size();
					num1 = changei(res.substr(0, i));
					break;
				}
				pos1 = j;
			}
			for (int j = i + 1;; j++){
				if (j != i + 1){
					if (res[j] == '+' || res[j] == '-' || res[j] == '*' || res[j] == '/'){
						if (res[i] == '*')num1 *= changei(res.substr(i + 1, j - (i + 1)));
						else num1 /= changei(res.substr(i + 1, j - (i + 1)));
						size2 = changes(num1).size();
						break;
					}
				}
				if (j == res.size() - 1){
					pos2 = j;
					if (res[i] == '*'){
						num1 *= changei(res.substr(i + 1, j - (i + 1) + 1));
					}
					else num1 /= changei(res.substr(i + 1, j - (i + 1) + 1));
					size2 = changes(num1).size();
					break;
				}
				pos2 = j;
			}
			if (pos2 != res.size() - 1){
				res = res.substr(0, pos1) + changes(num1)
					+ res.substr(pos2 + 1, res.size() - 1 - pos2);
			}
			else{
				res = res.substr(0, pos1) + changes(num1);
			}
			i = i - size1 + size2 - 1;
		}
	}

	//cout << "!!" << res << endl;

	REP(i, res.size()){
		if (res[i] == '+' || res[i] == '-'){
			if (i == 0)continue;
			int num1, pos1, pos2, size1, size2;
			for (int j = i - 1;; j--){
				if (res[j] == '+' || res[j] == '-'){
					if (j != 0)num1 = changei(res.substr(j + 1, i - j - 1));
					else {
						pos1 = j;
						size1 = res.substr(j, i - j).size();
						num1 = changei(res.substr(j, i - j));
					}
					break;
				}
				if (j == 0){
					pos1 = j;
					size1 = res.substr(0, i).size();
					num1 = changei(res.substr(0, i));
					break;
				}
				pos1 = j;
			}
			for (int j = i + 1;; j++){
				if (j != i + 1){
					if (res[j] == '+' || res[j] == '-'){
						if (res[i] == '+')num1 += changei(res.substr(i + 1, j - (i + 1)));
						else num1 -= changei(res.substr(i + 1, j - (i + 1)));
						size2 = changes(num1).size();
						break;
					}
				}
				if (j == res.size() - 1){
					pos2 = j;
					if (res[i] == '+')num1 += changei(res.substr(i + 1, j - (i + 1) + 1));
					else num1 -= changei(res.substr(i + 1, j - (i + 1) + 1));
					size2 = changes(num1).size();
					break;
				}
				pos2 = j;
			}
			if (pos2 != res.size() - 1){
				res = res.substr(0, pos1) + changes(num1)
					+ res.substr(pos2 + 1, res.size() - 1 - pos2);
			}
			else{
				res = res.substr(0, pos1) + changes(num1);
			}
			i = i - size1 + size2 - 1;
		}
		//cout << t << endl;
	}
	return res;
}

string solve(string t){
	string res = t;
	REP(i, res.size()){
		//cout << "!!" << i  << endl;
		//cout << res << endl;
		int pos1, pos2, size;
		if (res[i] == ')'){
			pos2 = i;
			for (int j = i; j >= 0; j--){
				if (res[j] == '('){
					pos1 = j;
					//cout << res.substr(pos1 + 1, pos2 - pos1 - 1) << endl;
					string buf = s_calc(res.substr(pos1 + 1, pos2 - pos1 - 1));
					size = buf.size();
					if (pos2 == res.size() - 1)res = res.substr(0, pos1) + buf;
					else res = res.substr(0, pos1) + buf + res.substr(pos2 + 1, res.size() - pos2 - 1);
					break;
				}
			}
			i = pos1 + size - 1;
			//cout << res << endl;
			//cout << "!" << i << endl;
		}
	}
	//cout << res << endl;
	return res;
}

int main(){
	cin >> n;
	REP(i, n){
		cin >> s;
		s.pop_back();
		cout << s_calc(solve(s)) << endl;
	}
	return 0;
}