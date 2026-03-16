#include<cstdio>
#include<cstring>
#include<queue>
#include<iostream>
#include<algorithm>
#include<string>
#include<map>
using namespace std;

typedef pair<string,int> P;
map<string,int> state;
map<string,int>::iterator it;
queue<P> que;
int dir[] = {-1,1,-4,4};  //状?数?的下?第一行? 0 1 2 3 第二行? 4 5 6 7 ,上下交?下?+4或-4; 

bool ok(string& s,int cur,int newcur){
	it = state.find(s);
	if(it != state.end())	return false;
	if((cur == 3 && newcur == 4) || (cur==4 && newcur == 3))	return false;
	if(cur < 0 || cur > 7 || newcur < 0 || newcur >7)	return false;
	return true;
}
	
void bfs(){
	que.push(P("01234567",0));
	state["01234567"] = 0;
	while(que.size()){
		P p = que.front(); que.pop();
		string s = p.first;
		int cur = p.second;
		for(int i = 0 ; i < 4 ; i ++){
			string str = s;
			int newcur = cur + dir[i];
			swap(str[cur],str[newcur]);
			if(ok(str,cur,newcur)){
				que.push(P(str,newcur));
				state[str] = state[s] + 1;
			}			
		}
	}
}

int main(){
	bfs();
	string s;
	while(getline(cin,s)){
		s.erase(remove(s.begin(), s.end(), ' '),s.end());
		printf("%d\n",state[s]);
	}
	return 0;
	
}