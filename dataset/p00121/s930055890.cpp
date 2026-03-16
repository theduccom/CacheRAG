#include <iostream>
#include <string>
#include <queue>
#include <unordered_map>

using namespace std;

queue<string> Q;
unordered_map<string, int> mp; 
const int dif[] = {1, 4, -1, -4};

void bfs()
{
	mp["01234567"] = 0;
	Q.push("01234567");
	string s, ns; int p, np;
	while(Q.size()){
		s = Q.front();
		Q.pop();
		for(int i = 0; i < 8; i++){
			if(s[i] == '0'){
				p = i;
				break;
			}
		}
		for(int i = 0; i < 4; i++){
			np = p + dif[i];
			if(np < 0 || np >= 8) continue;
			if( p == 3 && np == 4 || p == 4 && np == 3) continue;
			ns = s;
			char c = ns[p]; ns[p] = ns[np], ns[np] = c;
			if(mp.count(ns)) continue;
			mp[ns] = mp[s] + 1;
			Q.push(ns);
		}
	}
}

int main(void)
{
	bfs();
	
	int a[8]; string s;
	while(cin >> a[0]){
		for(int i = 1; i < 8; i++) cin >> a[i];
		s = "";
		for(int i = 0; i < 8; i++) s += a[i] + '0';
		cout << mp[s] << endl;
	}
	return 0;
}
