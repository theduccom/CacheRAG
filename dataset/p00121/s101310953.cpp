#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>
using namespace std;

// v ÍpYÌóÔ, pos Í 0(ó) ÌÊu, cnt Íè
struct state{
	vector<int> v;
	int pos, cnt;
};

// m[v] ÍpYÌóÔ v ©çÌÅZèðÔ·
map<vector<int>,int> m;
 
int solve(){
	queue<state> q;
	state ini;
	vector<int> v(8);
	for(int i=0 ; i < 8 ; i++ ){
		v[i] = i;
	}
	ini.v = v;
	ini.cnt = 0;
	ini.pos = 0;
	q.push( ini );
	m[v] = 0;
	
	while( !q.empty() ){
		state s = q.front(); q.pop();
		
		if( s.pos < 4 ){ // ãÉ®©·
			state next = s;
			swap( next.v[ next.pos ] , next.v[ next.pos+4 ] );
			next.pos += 4;
			next.cnt = s.cnt + 1;
			if( m.count(next.v) == 0 ){
				m[next.v] = next.cnt;
				q.push( next );
			}
		}else{ // ºÉ®©·
			state next = s;
			swap( next.v[ next.pos ] , next.v[ next.pos-4 ] );
			next.pos -= 4;
			next.cnt = s.cnt + 1;
			if( m.count(next.v) == 0 ){
				m[next.v] = next.cnt;
				q.push( next );
			}
		}
		// ¶É®©·
		if( s.pos % 4 != 0 ){
			state next = s;
			swap( next.v[ next.pos ] , next.v[ next.pos-1 ] );
			next.pos -= 1;
			next.cnt = s.cnt + 1;
			if( m.count(next.v) == 0 ){
				m[next.v] = next.cnt;
				q.push( next );
			}
		}
		// EÉ®©·
		if( s.pos % 4 != 3 ){
			state next = s;
			swap( next.v[ next.pos ] , next.v[ next.pos+1 ] );
			next.pos += 1;
			next.cnt = s.cnt + 1;
			if( m.count(next.v) == 0 ){
				m[next.v] = next.cnt;
				q.push( next );
			}
		}
	}
}

int main(){
	int e;
	solve();
	
	while( cin >> e ){
		vector<int> v(8);
		v[0] = e;
		for(int i = 1 ; i < 8 ; i++ ){
			cin >> v[i];
		}
		cout << m[v] << endl;
	}
}