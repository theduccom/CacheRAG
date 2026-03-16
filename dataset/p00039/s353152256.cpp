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
	map<char, int> roma;
	roma.insert(make_pair('I', 1));
	roma.insert(make_pair('V', 5));
	roma.insert(make_pair('X', 10));
	roma.insert(make_pair('L', 50));
	roma.insert(make_pair('C', 100));
	roma.insert(make_pair('D', 500));
	roma.insert(make_pair('M', 1000));

	char str[128];
	while(scanf("%s", str) != EOF){
		int v = 0;
		rep(i, strlen(str)){
			if(i && roma[str[i-1]]<roma[str[i]])
				v -= roma[str[i-1]]*2;
			v += roma[str[i]];
		}
		printf("%d\n", v);
	}
}