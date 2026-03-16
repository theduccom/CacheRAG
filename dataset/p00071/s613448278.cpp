#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <algorithm>
using namespace std;
typedef pair<int,int> P;
int main(){
	int n,x,y,tx,ty;
	char board[10][10];
	queue<P> q;
	P p,tp;
	string str;
	cin >> n;
	getline(cin,str);
	for(int i = 0;i < n;++i){
		getline(cin,str);
		memset(board,'\0',sizeof(board));
		for(int j = 0;j < 8;++j){
			getline(cin,str);
			for(int k = 0;k < 8;++k){
				board[j + 1][k + 1] = str[k];
			}
		}
		cin >> x >> y;
		getline(cin,str);
		p.first = x;
		p.second = y;
		q.push(p);
		while(!q.empty()){
			tp = q.front();
			x = tp.first;
			y = tp.second;
			q.pop();
			board[tp.second][tp.first] = '0';
			tx = 0;
			for(ty = 0;ty < 4;++ty){
				if(board[y + ty][x + tx] == '\0') break;
				else if(board[y + ty][x + tx] == '1'){
					tp.first = x + tx;
					tp.second = y + ty;
					q.push(tp);
				}
				board[y + ty][x + tx] = '0';
			}
			for(ty = 0;ty > -4;--ty){
				if(board[y + ty][x + tx] == '\0') break;
				else if(board[y + ty][x + tx] == '1'){
					tp.first = x + tx;
					tp.second = y + ty;
					q.push(tp);
				}
				board[y + ty][x + tx] = '0';
			}
			ty = 0;
			for(tx = 0;tx < 4;++tx){
				if(board[y + ty][x + tx] == '\0') break;
				else if(board[y + ty][x + tx] == '1'){
					tp.first = x + tx;
					tp.second = y + ty;
					q.push(tp);
				}
				board[y + ty][x + tx] = '0';
			}
			for(tx = 0;tx > -4;--tx){
				if(board[y + ty][x + tx] == '\0') break;
				else if(board[y + ty][x + tx] == '1'){
					tp.first = x + tx;
					tp.second = y + ty;
					q.push(tp);
				}
				board[y + ty][x + tx] = '0';
			}
		}
		cout << "Data " << i + 1 << ":" << endl;
		for(int j = 1;j < 9;++j){
			for(int k = 1;k < 9;++k){
				cout << board[j][k];
			}
			cout << endl;
		}
	}
	return 0;
}