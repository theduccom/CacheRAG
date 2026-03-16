#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <sstream>
#include <deque>

using namespace std;

map<string, int> m;


class State{
	public:
	string str;
	int posz;
	int depth;
};

void solve(void){
	State s,t;
	deque<State> q;
	string back;
	
	s.str="01234567";
	s.posz=0;
	s.depth=0;
	
	q.push_back(s);
	
	while(!q.empty()){
		s = q.front(); q.pop_front();
		
		//cout << s.str;
		if(m.find(s.str) != m.end()){
			//cout << " -> passed" << endl;
			continue;
		}
		m[s.str] = s.depth;
		//cout << " = " << s.depth << endl;
		t = s;
		
		if(s.posz != 0 &&s.posz != 4){
			swap(s.str[s.posz], s.str[s.posz-1]);
			s.posz = s.posz - 1;
			s.depth++;
			q.push_back(s);
		}
		s = t;
		if(s.posz != 3 && s.posz != 7){
			swap(s.str[s.posz], s.str[s.posz+1]);
			s.posz = s.posz + 1;
			s.depth++;
			q.push_back(s);
		}
		s = t;
		if(0 <= s.posz && s.posz <= 3){
			swap(s.str[s.posz], s.str[s.posz+4]);
			s.posz = s.posz + 4;
			s.depth++;
			q.push_back(s);
		}
		s = t;
		if(4 <= s.posz && s.posz <= 7){
			swap(s.str[s.posz], s.str[s.posz-4]);
			s.posz = s.posz - 4;
			s.depth++;
			q.push_back(s);
		}
	}
}

int main(void){
	string str;
	string query;
	char tmp;
	
	solve();
	
	while(getline(cin, str)){
		istringstream iss(str);
		
		query.clear();
		while(iss >> tmp){
			query += tmp;
		}
		
		cout << m[query] << endl;
	}
}