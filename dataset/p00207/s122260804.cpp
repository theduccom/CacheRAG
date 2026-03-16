#include <iostream>
#include <cstring>
#include <deque>
#include <algorithm>

using namespace std;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,-1,0,1};

int main(void){
	int w,h;
	
	while(cin >> w >> h){
		if((w|h) == 0) break;
		int f[w+2][h+2], sx, sy, ex, ey;
		bool reachable[w+2][h+2];
		memset(f,-1,sizeof(f));
		memset(reachable, false, sizeof(reachable));
		
		cin >> sx >> sy;
		cin >> ex >> ey;
		
		int n;
		cin >> n;
		int color,d,px,py, hh, ww;
		for(int i=0;i<n;i++){
			cin >> color >> d >> px >> py;
			if(d == 0){
				hh=2;
				ww=4;
			}else{
				hh=4;
				ww=2;
			}
			for(int p=0;p<hh;p++){
				for(int q=0;q<ww;q++){
					f[px+q][py+p] = color;
				}
			}
		}
		
		deque<pair<int,int> > q;
		reachable[sx][sy] = true;
		q.push_back(make_pair(sx,sy));
		
		while(!q.empty()){
			pair<int,int> pii = q.front();
			q.pop_front();
			reachable[pii.first][pii.second] = true;
			for(int i=0;i<4;i++){
				if(f[pii.first][pii.second] == f[pii.first+dx[i]][pii.second+dy[i]] &&
				reachable[pii.first+dx[i]][pii.second+dy[i]] == false){
					reachable[pii.first+dx[i]][pii.second+dy[i]] = true;
					q.push_back(make_pair(pii.first+dx[i], pii.second+dy[i]));
				}
			}
		}
		
		if(reachable[ex][ey]){
			cout << "OK" << endl;
		}else{
			cout << "NG" << endl;
		}
	}
}