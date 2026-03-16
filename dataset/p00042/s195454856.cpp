#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#define rep(i, a, n) for(int i = a;i < n;i++)
using namespace std;


int W, N;
int tv[1010];
int tw[1010];
int dp[1010][1010];


void input(){
	string s;
	stringstream ss;
	cin >> N;
	rep(i, 1, N+1){
		cin >> s;
		replace(s.begin(), s.end(), ',', ' ');
		ss.clear();
		ss << s;
		ss >> tv[i] >> tw[i];
	}
}


void makeDP(){
	rep(i, 0, N){
		rep(j, 0, W+1){
			if(tw[i+1] > j) dp[i+1][j] = dp[i][j];
			else dp[i+1][j] = max(dp[i][j-tw[i+1]] + tv[i+1], dp[i][j]);
		}
	}
}

int main(){
	int d = 0;
	while(d++, cin >> W, W){
		input();
		makeDP();
		auto v = max_element(&dp[N][0], &dp[N][W+1]);
		auto w = v - &dp[N][0];

		cout << "Case " << d << ':' << endl;
		cout << *v << endl;
		cout << w << endl;
	}

	return 0;
}