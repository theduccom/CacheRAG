#include <iostream>
#include <map>
#include <queue>
#include <string>

using namespace std;

map<string, bool> mpp1;
map<string, int> mpp2;

struct P{
	int c;
	string str;
	int x;
	int y;
};

int xdir[4] = {0, 1, 0, -1}, ydir[4] = {1, 0, -1, 0};

void func(void)
{
	string str = "";
	char a[2][8];
	queue<P> que;
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 4; j++){
			str += (char)('0'+(4*i+j));
		}
	}
	P p, q;
	p.str = str;
	p.c = p.x = p.y = 0;
	que.push(p);
	mpp1[str] = true;
	mpp2[str] = 0;
	
	while(!que.empty()){
		p = que.front();
		que.pop();
		for(int i = 0; i < 4; i++){
			int dx = p.x+xdir[i], dy = p.y+ydir[i];
			str = p.str;
			if(0 <= dx && dx < 4 && 0 <= dy && dy < 2){
				char w = str[dx+4*dy];
				str[dx+4*dy] = str[p.x+p.y*4];
				str[p.x+p.y*4] = w;
				if(!mpp1[str]){
					mpp1[str] = true;
					q.c = mpp2[str] = p.c + 1;
					q.str = str;
					q.x = dx;
					q.y = dy;
					que.push(q);
				}
			}
		}
	}
	
	return ;
}

int main()
{
	int n;
	char w;
	string str;
	func();
	
	while(cin>>w){
		str = "";
		str += w;
		for(int i = 1; i < 8; i++){
			cin >> w;
			str += w;
		}
		
		cout << mpp2[str] << endl;
	}
	
	
	return 0;
}