#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;
typedef pair<int, int>P;

char H[200][200];

int main() {
	int h, w;
	while (cin >> h >> w, h) {
		rep(i, h)scanf("%s", H[i]);
		int x = 0, y = 0;
		map<P, bool>mp;
		while (1) {
			if (mp[P(x, y)]) {
				puts("LOOP");
				break;
			}
			if (H[x][y] == '.') {
				cout << y << ' ' << x << endl;
				break;
			}
			mp[P(x, y)] = true;
			if (H[x][y] == '>')y++;
			else if (H[x][y] == '<')y--;
			else if (H[x][y] == 'v')x++;
			else x--;
		}
	}
}