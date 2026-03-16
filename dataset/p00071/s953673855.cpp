#include<iostream>
#include<utility>
#include<stack>
#include<string>
using namespace std;

char map[9][9];
int dx[12] = {1,2,3,0,0,0,-1,-2,-3,0,0,0};
int dy[12] = {0,0,0,1,2,3,0,0,0,-1,-2,-3};
		
int main()
{
	int n;
	cin >> n;
	for(int i=1; i<=n; i++){
		// mapの初期化
		for(int j=1; j<=8; j++){
			string s; cin >> s;
			for(int k=1; k<=8; k++){map[j][k]=s[k-1];}}
		// 初めに爆発する爆弾の座標
		pair<int, int> p;
		cin >> p.second >> p.first;
		stack< pair<int, int> > stk;
		stk.push(p);
		map[p.first][p.second] = '0';
		// 爆発の連鎖が終わるまでループを回る
		while(stk.size()){
			p = stk.top(); stk.pop();
			for(int i=0; i<12; i++){
				int nx = p.first+dx[i], ny = p.second+dy[i];
				if(0<nx && nx<=8 && 0<ny && ny<=8 && map[nx][ny]=='1'){
					pair<int,int> tp(p.first+dx[i], p.second+dy[i]);
					stk.push(tp);
					map[p.first+dx[i]][p.second+dy[i]] = '0';
				}
			}
		}
		// mapの出力
		cout << "Data " << i << ":\n";
		for(int j=1; j<=8; j++){
			for(int k=1; k<=8; k++){cout << map[j][k];}
			cout << endl;}
	}
	return 0;
}