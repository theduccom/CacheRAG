#include <cstdio>
#define REP(i, a, b) for(int i=(a);i<(b);++i)
#define rep(i,n) REP(i,0,n)
char m[16][16], buf[16];
int main()
{
	while (true) {
		bool done = false;
		rep(i, 8) if (scanf("%s", m[i]) == EOF) done = true;
		if (done) break;

		char res = 0;
		rep(i, 8) rep(j, 8) {
			if (m[i][j] == '1') {
				if (j < 5 && m[i][j+1]=='1'&&m[i][j+2]=='1'&&m[i][j+3]=='1') {
					res = 'C';
				}
				else if (j < 7 && i < 7 && m[i][j+1]=='1'&&m[i+1][j]=='1'&&m[i+1][j+1]=='1') {
					res = 'A';
				}
				else if (i < 5 && m[i+1][j]=='1'&&m[i+2][j]=='1'&&m[i+3][j]=='1') {
					res = 'B';
				}
				else if (i < 6 && j > 0 && m[i+1][j-1]=='1'&&m[i+1][j]=='1'&&m[i+2][j-1]=='1') {
					res = 'D';
				}
				else if (i < 7 && j < 6 && m[i][j+1]=='1'&&m[i+1][j+1]=='1'&&m[i+1][j+2]=='1') {
					res = 'E';
				}
				else if (i < 6 && j < 7 && m[i+1][j+1]=='1'&&m[i+1][j]=='1'&&m[i+2][j+1]=='1') {
					res = 'F';
				}
				else if (i < 7 && j < 7 && j > 0 && m[i][j+1]=='1'&&m[i+1][j]=='1'&&m[i+1][j-1]=='1') {
					res = 'G';
				}
			}
			if (res > 0) goto BREAK;
		}
BREAK:
		printf("%c\n", res);
	}
	return 0;
}