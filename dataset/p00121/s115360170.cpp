#include<iostream>
#include<queue>
#include<algorithm>
#include<map>
using namespace std;
map<string, int> dp;
int dir[4] = {-1, -4, 1, 4};
/*
 第一次从看到&#36825;个&#39064;目，从正面思考很&#38590;，&#36825;&#26102;要学会从反面思考，从&#32467;果出&#21457;得到&#27599;一个状&#24577;，&#36825;&#26102; 
 &#27599;个状&#24577;的&#32467;果就可以通&#36807;BFS一&#27493;&#27493;得到，然后用一个MAP&#32500;&#25252;起来，&#36825;&#26679;完全&#25191;行一次之后就可以得到
 所有可能的&#32467;果了，然后直接从&#36755;入的&#32467;果中&#26597;找&#23545;&#24212;的答案就行了！ 
*/
void bfs(){
	queue<string> que;
	que.push("01234567");
	
	while(que.size()){
		string now = que.front();
		que.pop();
		
		int curP = 0;
		for(int i = 0; i < now.length(); i++){
			if(now[i] == '0'){
				curP = i;
			}
		}
		
		for(int i = 0; i < 4; i++){
			int nexP = curP + dir[i];
			//&#36824;是老&#38382;&#39064;，我&#20204;在数&#32452;表示的地&#22270;移&#21160;&#26102;，一定要注意移&#21160;的合法性和正&#30830;性 
			if(nexP >= 0 && nexP < 8 && !(nexP == 4 && curP == 3) && !(nexP == 3 && curP == 4)){
				string next = now;
				swap(next[curP], next[nexP]);
				if(dp.find(next) == dp.end()){
					dp[next] = dp[now] + 1;
					que.push(next);
				}
			}
		}
	}
}

void solve(){
	bfs();
	string line;
	//无限&#36755;入字符串，一行一个
	while(getline(cin, line)){
		//去掉字符串的空格
		line.erase(remove(line.begin(), line.end(), ' '), line.end());
		cout << dp[line] << endl;
	}
	 
}

int main(){
	solve();
}