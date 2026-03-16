#include "stdio.h"
#include "stdlib.h"
#include "iostream"
#include "math.h"
#include <string.h>
#include <stack>
#include <queue>
#include <map>
#include <string>
#include "algorithm"


using namespace std;
#define fori0(G) for(int i=0;i<G;i++)
#define fori1(G) for(int i=1;i<=G;i++)
#define forj0(G) for(int j=0;j<G;j++)
#define forj1(G) for(int j=1;j<=G;j++)
#define fork0(G) for(int k=0;k<G;k++)
#define fork1(G) for(int k=1;k<=G;k++)
int dx[] = { -1,0,1,0 ,0}, dy[] = { 0,1,0,-1,0 };
#define nxnycon (0<=nx&&nx<h&&0<=ny&&ny<w) 
typedef struct {
	int x;
	int y;
}cod;
map<string, int> mp;
int co;

string s(8, ' ');

void bfs(void) {
	s = "01234567";
	int z;
	string np;
	queue<string> que;

	que.push(s);
	
	mp[s] = 1;
	while (que.size()) {
		
		string p = que.front();
		np = p;
		que.pop();
		co++;
		//cout<<p;
		//if (p== "01234567") { return mp[p]-1; }
		fori0(8) { if (p[i] == '0') z = i; }
		fori0(4) {
			int x = 0;
			np = p;
			switch (i) {
			case 0:
				if (z >= 4) {
					swap(np[z], np[z - 4]);
					x = 1;
				}
				break;
			case 1:
				if (z != 3 && z != 7) {
					swap(np[z], np[z + 1]);
					x = 1;
				}
				break;
			case 2:
				if (z <= 3) {
					swap(np[z], np[z + 4]);
					x = 1;
				}
				break;
			case 3:
				if (z != 0 && z != 4) {
					swap(np[z], np[z - 1]);
					x = 1;
				}
				break;
			}
			//cout << np;
			if (x == 1 && mp[np] == 0) {
				que.push(np);
				mp[np] = mp[p] + 1;
				//cout << "jjj";
			}
			
		}
	}
	return ;
}

int main() {
	bfs();
	//s[8] = '\0';
	while (1) {
		fori0(8) {
			if (!(cin >> s[i])) return 0;
		}
		 printf("%d\n", mp[s]-1); 
		// cout << co;
		 //printf("%d", mp["hello"]);
	}
	
	//cout << bfs() << endl;
	
	//system("pause");
	//return 0;
}

