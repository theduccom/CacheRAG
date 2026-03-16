#include <iostream>
#include <string>
#include <map>
#include <queue>
using namespace std;

int dx[] = {0,1,0,-1},dy[] = {1,0,-1,0};

int main(){
	map<string,int> used;
	queue<string> que;
	que.push("01234567");
	for(int i = 0;;i++){
		int siz = que.size();
		if(!siz) break;
		for(int j = 0;j < siz;j++){
			string s = que.front();que.pop();
			if(used.find(s) != used.end()) continue;
			used[s] = i;
			for(int k = 0;k < 8;k++){
				if(s[k] == '0'){
					for(int l = 0;l < 4;l++){
						int x = k / 4 + dx[l],y = k % 4 + dy[l];
						if(x >= 0 && x < 2 && y >= 0 && y < 4){
							string t = s;
							t[k] = t[x * 4 + y];
							t[x * 4 + y] = '0';
							que.push(t);
						}
					}
				}
			}
		}
	}
	string s;
	while(getline(cin,s)){
		string t;
		for(int i = 0;i < s.length();i++){
			if(s[i] != ' ') t += s.substr(i,1);
		}
		cout << used[t] << endl;
	}
	return 0;
}