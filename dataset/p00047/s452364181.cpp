#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <sstream>
#include <cmath>
#include <climits>
#include <set>
#include <map>

using namespace std;

#define reep(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reep(i,0,n)

typedef vector<int> vi;

int main()
{
	int cup[] = {1, 0, 0};
	char a, b;
	while(scanf("%c,%c%*c", &a, &b) != EOF){
		swap(cup[a-'A'], cup[b-'A']);
	}

	rep(i, 3){
		if(cup[i]){
			printf("%c\n", 'A'+i);
			break;
		}
	}

	return 0;
}