#include <bits/stdc++.h>
using namespace std;

struct node{
	string str;
	int post;
};
queue<node> nxt;
map<string, int> ans;
const int dx[] = {1, -1, -4, 4};
bool judge(int pos, int op){
	if((pos==0||pos==4)&&op==1) return false;
	if((pos==3||pos==7)&&op==0) return false;
	if((pos<4&&op==2)||(pos>3&&op==3)) return false;
	return true;
}
void built(){
	node ori = node{"01234567", 0};
	nxt.push(ori);
	ans[ori.str] = 0;
	while(!nxt.empty()){
		node tem = nxt.front();
		nxt.pop();
		for(int i = 0; i < 4; i++){
			if(!judge(tem.post, i)) continue; 
			node now = node{tem.str, tem.post + dx[i]};
			swap(now.str[tem.post],now.str[tem.post+dx[i]]);
			if(ans.count(now.str)) continue;
			nxt.push(now), ans[now.str] = ans[tem.str] + 1;
	    }
	}
}

int main(){
	ios::sync_with_stdio(false);
	built();
	char lin[9];
	while(cin >> lin[0]){
	    for(int i = 1; i < 8; i++) cin >> lin[i];
	    lin[8] = '\0';
		cout << ans[lin] << "\n";
	}
	return 0;
}