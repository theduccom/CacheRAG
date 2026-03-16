#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<queue>
#include<map>
#include<stack>
#include<set>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int MAX_N=100000;
const int INF = 0x3f3f3f3f;
#define eps 1e-7

map<string , int > m;

int dir[4]={-4,4,-1,1};
void bfs(){
	queue<string> q;
	m["01234567"]=1;
	q.push("01234567");
	while(!q.empty()){
		string t=q.front();
		q.pop();
		int pi;
		for(int i=0;i<8;i++){
			if(t[i]=='0'){
				pi=i;
				break;
			}
		}
		for(int i=0;i<4;i++){
			if(pi==4&&i==2)
				continue;
			if(pi==3&&i==3)
				continue;
			int np=pi+dir[i];
			if(np<0||np>=8)
				continue;
			string st=t;
			swap(st[pi],st[np]);
			if(m[st] == 0){
				m[st]=m[t]+1;
				q.push(st);
			}
		}
	}
}
int main(){
	ios::sync_with_stdio(false);
	bfs();
	string s;
	char te;
	while(cin>>te){
		s=s+te;
		for(int i=1;i<=7;i++){
			cin>>te;
			s=s+te;
		}
		
	//	cout<<s<<endl;
		cout<<m[s]-1<<endl;
		s.clear();
	}
	return 0;
}


