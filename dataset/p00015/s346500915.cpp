#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

#define reep(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reep(i,0,n)

typedef vector<int> vi;

int main()
{
	int n;
	scanf("%d%*c", &n);
	rep(i, n){
		vi a, b;
		char c;
		while(scanf("%c", &c), c != '\n')
			a.push_back(c-'0');
		while(scanf("%c", &c), c != '\n')
			b.push_back(c-'0');
		
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());

		int kuri = 0;
		vi ans;
		for(int j=0, k=0; j<(int)a.size() || k<(int)b.size() || kuri; ++j, ++k){
			int v = (j<(int)a.size() ? a[j] : 0) + (k<(int)b.size() ? b[k] : 0) + kuri;
			kuri = v/10;
			ans.push_back(v%10);
		}

		if(ans.size()>80)
			puts("overflow");
		else{
			for(int j=ans.size()-1; j>=0; --j)
				printf("%d", ans[j]);
			puts("");
		}
	}
	return 0;
}