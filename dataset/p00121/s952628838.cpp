#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>
#include <vector>
#include <queue>
#include <algorithm>
#include <iterator>
#include <sstream>
#include <string>
#include <map>
using namespace std;
#define rep(I,N) for(int I = 0; I < (int)(N); I++)
#define FIN(V) cout<<V<<endl
#define pb push_back
#define INF 1e+8
typedef pair<string, int> P;
typedef long long ll;
typedef priority_queue<int> pq;

map<string, int> data;
int direc[4] = {1, -1, 4, -4};

void bfs(){
	queue<P> que;
	que.push(P("01234567", 0));

	while(!que.empty()){
		P p = que.front();
		que.pop();
		string panel = p.first;
		int now = p.second;

		rep(i, 4){
			if(now+direc[i] >= 0 && now+direc[i] < 8){
				if((now == 3 && direc[i] == 1) || (now == 4 && direc[i] == -1))continue;
				string next = panel;
				next[now] = panel[now+direc[i]];
				next[now+direc[i]] = panel[now];

				if(data[next] != 0)continue;
				que.push(P(next, now+direc[i]));
				data[next] = data[panel]+1;
			}
		}
	}
}



int main(void){
	data["01234567"] = 1;
	string a;
	bfs();
	while(cin >> a){
		string S, L;
		S += a;
		for(int i = 1; i <= 7; i++){
			cin >> L;
			S += L;
		}
		cout << data[S]-1 << endl;
	}


	return 0;	
}