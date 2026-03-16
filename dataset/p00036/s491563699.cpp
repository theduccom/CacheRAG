#include <bits/stdc++.h>  

using namespace std;

#define FOR(i, j, k) for(int i = j; i < k; ++i)
#define rep(i, j) FOR(i, 0, j)
#define repr(i, j) for(int i = j; i >= 0; --i)
#define INF (1 << 30)
#define MOD 1e9 + 7

char s[10][10];

int main() {
	while(cin >> s[0]) {
		FOR(i, 1, 8) cin >> s[i];
		rep(i, 8) rep(j, 8) if(s[i][j] == '1') {
			if(s[i][j+1] == '1') {
				if(s[i+1][j] == '1' && s[i+1][j+1] == '1') {
					printf("A\n");
					goto end;
				}
				else if(s[i+1][j+1] == '1' && s[i+1][j+2] == '1') {
					printf("E\n");
					goto end;
				}
				else if(s[i][j+2] == '1' && s[i][j+3] == '1') {
					printf("C\n");
					goto end;
				}
				else{
					printf("G\n");
					goto end;
				}
			}
			else {
				if(s[i+1][j-1] == '1' && s[i+1][j] == '1' && s[i+2][j-1] == '1') {
					printf("D\n");
					goto end;
				} 
				else if(s[i+1][j] == '1' && s[i+1][j+1] == '1' && s[i+2][j+1] == '1') {
					printf("F\n");
					goto end;
				}
				else {
					printf("B\n");
					goto end;
				}
			}
		}
		end:;
	}
	return 0;
}