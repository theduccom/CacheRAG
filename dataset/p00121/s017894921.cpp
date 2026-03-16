#include<bits/stdc++.h>
#define sd(x) scanf("%d",&x)
#define ss(x) scanf("%s",x)
#define sc(x) scanf("%c",&x)
#define sf(x) scanf("%f",&x)
#define slf(x) scanf("%lf",&x)
#define slld(x) scanf("%lld",&x)
#define me(x,b) memset(x,b,sizeof(x))
#define pd(d) printf("%d\n",d);
#define plld(d) printf("%lld\n",d);
// #define Reast1nPeace

typedef long long ll;

using namespace std;

const int INF = 0x3f3f3f3f;

map<string , int> m;

int dir[4] = {-4,4,-1,1};

void bfs(){
	queue<string> q;
	m["01234567"] = 1;
	q.push("01234567");
	
	while(!q.empty()){
		string t =  q.front() ; q.pop();
		
		int pi;
		for(int i = 0 ; i<8 ; i++){
			if(t[i] == '0'){
				pi = i;
				break;
			}
		}
		
		for(int i = 0 ; i<4 ; i++){
			if(pi==4 && i==2)	continue;
			if(pi==3 && i==3)	continue;
			
			int np = pi+dir[i];
			if(np<0||np>=8)	continue;
			
			string st = t;
			swap(st[pi],st[np]);
			if(m[st] == 0){
				m[st] = m[t]+1;
				q.push(st);
			}
		}
	}
}

int main(){
#ifdef Reast1nPeace
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	ios::sync_with_stdio(false);
	bfs();
	string s;
	while(getline(cin,s)){
		string mapp = "";
		for(int i = 0 ; i<s.size() ; i++){
			if(i%2==0){
				mapp += s[i];
			}
		}
		cout<<m[mapp]-1<<endl;
	}
	return 0;
}

