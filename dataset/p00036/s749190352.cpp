#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <bitset>
  
#define rep(i, n) for(int i = 0; i < (n); i++)
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define all(v) (v).begin(), (v).end()
#define rev(s) (s).rbegin(), (s).rend()
#define MP make_pair
#define X first
#define Y second
#define debug(x) cout << #x << " = " << (x) << endl;
  
using namespace std;
  
typedef long long ll;
typedef pair<int, int> P;
typedef vector<int> vi;

vector<string> v(8);

char check(int y, int x){
	if(x < 0 || x >= 8 || y < 0 || y >= 8) return '0';
	return v[y][x];
}

int main(){
	vector<string> fig(7);
	fig[0] = "110110000";
	fig[1] = "100100100";
	fig[2] = "111000000";
	fig[3] = "100100000";
	fig[4] = "110011000";
	fig[5] = "100110010";
	fig[6] = "110100000";

	while(1){
		rep(i, 8) if(!(cin >> v[i])) return 0;

		rep(i, 8){
			rep(j, 8){
				if(v[i][j] != '1') continue;
				string s;
				for(int k = 0; k < 3; k++){
					for(int l = 0; l < 3; l++){
						s += check(i+k, j+l);
					}
				}
				rep(k, fig.size()){
					if(s == fig[k]){
						cout << "ABCDEFG"[k] << endl;
						goto nextloop;
					}
				}
			}
		}
nextloop:
		;
	}

	return 0;
}