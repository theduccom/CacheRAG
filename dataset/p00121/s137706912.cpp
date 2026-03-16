#define _USE_MATH_DEFINES
#include <iostream>
#include <complex>
#include <algorithm>
#include <vector>
#include <stack>
#include <string>
#include <queue>
#include <cmath>
#include <math.h>
#include <numeric>
#include <list>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <climits>
#include <set>
#include <memory.h>
#include <memory>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cassert>
#include <map>
#include <cassert>
#include <time.h>
#include <ctime>

using namespace std;

typedef complex<double> xy_t;
typedef pair<xy_t, xy_t> line;
typedef long long ll;
typedef pair<int, int> P;
typedef pair<int , P> PP;
typedef pair<int, string> Ps;
typedef vector<int> vec;
typedef vector<vec> mat;
const int INF= 1 << 30;
const double EPS = 1e-9;
const double PI = 3.1415926535897932384626433832795;
const int CLK = CLOCKS_PER_SEC;

#define rep(i, n) for(int i = 0; i < n; i++)

double cross(const xy_t &a, const xy_t &b){
	return imag(conj(a) * b);
}

double dot(const xy_t &a, const xy_t &b){
	return real(conj(a) * b);
}

xy_t projection(const line &l, const xy_t &p){
	double t = dot(p - l.first, l.first - l.second) / norm(l.first - l.second);
	return l.first + t * (l.first - l.second);
}

bool intersectSP(const line &l, const xy_t &p){
	return abs(l.first- p) + abs(l.second - p) - abs(l.first - l.second) < EPS;
}

double distanceSP(line s, xy_t p){
	const xy_t r = projection(s, p);
	if(intersectSP(s, r)) return abs(r - p);
	return min(abs(s.first - p), abs(s.second - p));
}

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

bool ok(vector<vector<int> > p){
	rep(i,2)rep(j,4) if(p[i][j] != i * 4 + j) return false;
	return true;
}

void swap(int &u, int &v){
	int t = u;
	u = v;
	v = t;
}

int memo[8][8][8][8][8][8][8][8];

int& get_num(const vector<vector<int> > &vvi){
	return memo[vvi[0][0]][vvi[0][1]][vvi[0][2]][vvi[0][3]][vvi[1][0]][vvi[1][1]][vvi[1][2]][vvi[1][3]];
}

int main(){
	clock_t c1, c2;
	vector<vector<int > > s(2, vector<int>(4));
	rep(i, 2)rep(j, 4) s[i][j] = i * 4 + j;
	memset(memo, -1, sizeof(memo));
	c1 = clock();
	get_num(s) = 0;
	queue<vector<vector<int> > > que;
	que.push(s);
	while(!que.empty()){
		vector<vector<int> > p = que.front();
		que.pop();
		int num = get_num(p);
	//	cout << num << endl;
		for(int i = 0; i < 2; i++){
			for(int j = 0; j < 4; j++){
				if(p[i][j] == 0){
					for(int k = 0; k < 4; k++){
						int i2 = i + dy[k];
						int j2 = j + dx[k];
						if(0 <= i2 && i2 < 2 && 0 <= j2 && j2 < 4){
							swap(p[i][j], p[i2][j2]);
						//	cout << get_num(p) << endl;
							if(get_num(p) == -1){
								get_num(p) = num + 1;
						//		cout << get_num(p) << endl;
								que.push(p);
							}
							swap(p[i][j], p[i2][j2]);
						}
					}
				}
			}
		}
	}
	c2 = clock();
	//cout << (double)(c2 - c1) / CLK << endl;
	while(cin >> s[0][0] >> s[0][1] >> s[0][2] >> s[0][3]
	>> s[1][0] >> s[1][1] >> s[1][2] >> s[1][3]){
		cout << get_num(s) << endl;
	}
	return 0;
}