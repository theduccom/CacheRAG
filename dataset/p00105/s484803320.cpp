#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
#define loop(i,a,b) for(int i=(a);i<ull(b);++i)
#define rep(i,n) loop(i,0,n)
#define all(a) (a).begin(), (a).end()

const double eps = 1e-10;
const double pi  = acos(-1.0);
const double inf = (int)1e8;

bool pairCompare(const std::pair<string, priority_queue<int, vector<int>, greater<int> > >& firstElem, const std::pair<string, priority_queue<int, vector<int>, greater<int> > >& secondElem) {
  return firstElem.first < secondElem.first;
}


int main(){
	vector<pair<string, priority_queue<int, vector<int>, greater<int> > > > v;
	string s;int n;
	while(cin >> s >> n){
		bool b = false;
		for(int i=0; i < v.size(); i++) if(v[i].first == s){b = true; v[i].second.push(n); break;}
		if(!b){
			priority_queue<int, vector<int>, greater<int> > q;
			q.push(n);
			v.push_back(make_pair(s, q));
		}
	}
	sort(v.begin(), v.end(), pairCompare);
	for(int i=0; i< v.size(); i++){
		cout << v[i].first << endl;
		bool b = false;
		while(!v[i].second.empty()){
			cout << (b ? " " : "") << v[i].second.top(); b = true;
			v[i].second.pop();
		}
		cout << endl;
	}
}