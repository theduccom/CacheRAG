#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <sstream>
#include <string>
#include <bitset>
using namespace std;
#define FOR(I,F,N) for(int I = F; I < (int)(N); I++)
#define rep(i, n) FOR(i, 0, n)
#define FIN(V) cout<<V<<endl
#define pb push_back
#define INF (1 << 28)

template<typename T>
void remove(vector<T>& vector, unsigned int index){
vector.erase(vector.begin() + index);
}

typedef pair<int, int> P;
typedef long long ll;
typedef priority_queue<int> pq;
int StrToInt(string);
string IntToStr(int);
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

map<string, vector<int> > list;
vector<string> names;
map<string, bool> check;

int main(void){
	string S;
	int n;
	while(cin >> S >> n){
		list[S].push_back(n);
		names.pb(S);
	}
	sort(names.begin(), names.end());
	rep(i, names.size()){
		S = names[i];
		if(check[S])continue;
		sort(list[S].begin(), list[S].end());
		cout << S << endl;
		rep(i, list[S].size()){
			if(i != 0)cout << " ";
			cout << list[S][i];
		}
		check[S] = true;
		cout << endl;
	}
	

	return 0;
}



int StrToInt(string s){
	stringstream ss;
	ss << s;
	int val;
	ss >> val;
	return val;
}
string IntToStr(int i){
	stringstream ss;
	ss << i;
	return ss.str();
}