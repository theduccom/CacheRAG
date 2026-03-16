#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
using namespace std;
int main (int argc, char *argv[]) {
	int H,W;
	while (true) {
		cin >> H >> W;
		cin.ignore();
		if (H == 0 && W == 0) break;
		vector<string> map(H);
   	for (int i=0;i<H;i++) {getline(cin,map[i]);}
		vector<vector<bool> > flags(H,vector<bool>(W,false));
		queue<pair<int,int> > que;
		que.push(make_pair(0,0));
		while (!que.empty()) {
			pair<int,int> p = que.front(); que.pop();
			int x = p.first, y = p.second;
			if (flags[y][x]) {
				cout << "LOOP" << endl;
				break;
			}
			flags[y][x] = true;
			char d = map[y][x];
			if (d == '>') que.push(make_pair(x+1,y));
			else if (d == '<') que.push(make_pair(x-1,y));
			else if (d == '^') que.push(make_pair(x,y-1));
			else if (d == 'v') que.push(make_pair(x,y+1));
			else if (d == '.') {
				cout << x << " " << y << endl;
				break;
			}
		}
		
	}
	
	return 0;
}