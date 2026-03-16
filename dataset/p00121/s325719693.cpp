#include <iostream>
#include <map>
#include <queue>
#include <sstream>

using namespace std;

vector<string> next(string s){
	vector<string> v;
	int i = s.find('0', 0);
	if(i < 4){
		if(i > 0){
			v.push_back(s.substr(0, i-1)+s[i]+s[i-1]+s.substr(i+1));
		}
		if(i < 3){
			v.push_back(s.substr(0, i)+s[i+1]+s[i]+s.substr(i+2));
		}
		v.push_back(s.substr(0,i)+s[i+4]+s.substr(i+1,3)+s[i]+s.substr(i+5));
	}else{
		if(i < 7){
			v.push_back(s.substr(0, i)+s[i+1]+s[i]+s.substr(i+2));
		}
		if(i > 4){
			v.push_back(s.substr(0, i-1)+s[i]+s[i-1]+s.substr(i+1));
		}
		v.push_back(s.substr(0,i-4)+s[i]+s.substr(i-3,3)+s[i-4]+s.substr(i+1));
	}
	return v;
}

int main(){
	int n[8];
	priority_queue<pair<int,string>, vector<pair<int,string>>, greater<pair<int,string>>> q;
	q.push(pair<int,string>(0,"01234567"));
	map<string,int> mintime;
	mintime["01234567"] = 0;
	while(!q.empty()){
		auto p = q.top();
		q.pop();
		auto v = next(p.second);
		for(auto s: v){
			if(mintime.find(s) == mintime.end()){
				mintime[s] = p.first+1;
				q.push(pair<int,string>(p.first+1, s));
			}
		}
	}
	while(cin >> n[0]){
		for(int i = 1; i < 8; ++i){
			cin >> n[i];
		}
		string s;
		stringstream ss;
		for(int i = 0; i < 8; ++i){
			ss << n[i];
		}
		cout << mintime[ss.str()] << endl;
	}
}