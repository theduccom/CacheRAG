#include <iostream>
using namespace std;

int w,h;
char t[102][102];

int dx[128];
int dy[128];

int main(void){
	dx['>'] = 1;
	dx['<'] = -1;
	dy['v'] = 1;
	dy['^'] = -1;

	while(cin>>h>>w && (h||w)){
		for(int i=0;i<h;i++){
			cin>>t[i];
		}

		int x = 0, y = 0;
		while(t[y][x] != '?' && t[y][x] != '.'){
			int nx = x + dx[t[y][x]];
			int ny = y + dy[t[y][x]];
			t[y][x] = '?';
			x = nx;
			y = ny;
		}
		if(t[y][x] == '?'){
			cout<<"LOOP\n";
		}
		else{
			cout<<x<<" "<<y<<endl;
		}
	}

	return 0;
}