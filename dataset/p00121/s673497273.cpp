#include<map>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<queue>
#include<algorithm>
using namespace std;
typedef pair<string,int> P;
map<string,int> dp;
int opt[4]= {1,-1,4,-4};
void bfs() {
	queue<P> que;
	que.push(P("01234567",0));
	dp["01234567"]=0;

	while(que.size()) {
		P p =que.front();
		que.pop();
		string s = p.first;
		int cur = p.second;
		for(int i=0; i<4; i++) {
			int next = cur+opt[i];
			string str = s;
			swap(str[cur],str[next]);
			map<string,int>:: iterator it = dp.find(str);
			if(next>=0&&next<8&&!(cur==3&&opt[i]==1)&&!(cur==4&&opt[i]==-1)&&it==dp.end()){
				que.push(P(str,next));
				dp[str]=dp[s]+1;
			}

		}
	}
}
int main() {
	string a;
	bfs();
	while(getline(cin,a)) {
		a.erase(remove(a.begin(), a.end(),' '), a.end());
		printf("%d\n",dp[a]);
	}
}