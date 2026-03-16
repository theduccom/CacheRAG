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
	int w;
	while(scanf("%d", &w) != EOF){
		rep(i, 10){
			if(w&1){
				printf("%d", 1<<i);
				w >>= 1;
				if(w) printf(" ");
			}else
				w>>=1;
		}
		puts("");
	}

	return 0;
}