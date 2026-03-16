#include <iostream>
#include <string>
#include <map>
#include <queue>
#include <algorithm>
using namespace std;
map<string,int> m;
string last = "01234567";
int f(){
	int da[] = {-4 , -1 , 1 , 4},a;
	queue<string> q;
	q.push(last);
	m[last] = 0;
	while(!q.empty()){
		string s = q.front(),ts;
		q.pop();
		int i = s.find('0');
		for(int j = 0;j < 4;++j){
			ts = s;
			a = i + da[j];
			if((i == 3 && a == 4) || (i == 4 && a == 3)) continue;
			if(-1 < a && a < 8){
				swap(ts[i],ts[a]);
				if(!m.count(ts)){
					q.push(ts);
					m[ts] = m[s] + 1;
				}
			}
		}
	}
	return 0;
}
int main(){
	string s = "\0";
	int c = 0;
	char a;
	f();
	while(cin >> a){
		s += a;
		++c;
		if(c == 8){
			c = 0;
			cout << m[s] << endl;
			s = "\0";
		}
	}
	return 0;
}