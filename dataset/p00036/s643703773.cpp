#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <sstream>
#include <cmath>
#include <climits>
#include <map>

using namespace std;

#define reep(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reep(i,0,n)

typedef vector<int> vi;

int main()
{
	while(1){
		char field[8][9];
		int left = 8, right = 0, top = 8, bottom = 0;
		rep(y, 8){
			if(scanf("%s", field[y]) == EOF)
				return 0;
			rep(x, 8){
				if(field[y][x] == '1'){
					left = min(left, x);
					right = max(right, x);
					top = min(top, y);
					bottom = max(bottom, y);
				}
			}
		}

		int w = right - left + 1, h = bottom - top + 1;
		if(h==4)
			puts("B");
		else if(w==4)
			puts("C");
		else if(w==2 && h==2)
			puts("A");
		else if(w==2 && h==3)
			puts(field[top][left] == '1' ? "F" : "D");
		else
			puts(field[top][left] == '1' ? "E" : "G");
	}
}