#include <cstdio>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

typedef long long ll;

int n;
int s[4000];
int sn;
int index[4001];
int id[4000];

int main(){
	while(1){
		scanf("%d", &n);
		if(n == 0){
			break;
		}

		fill(index, index + 4001, -1);

		rep(i, n){
			int a, x, y;
			scanf("%d%d%d", &a, &x, &y);

			if(index[a] == -1){
				index[a] = sn;
				id[sn] = a;
				s[sn++] = 0;
			}
			s[index[a]] = min(ll(1e6), s[index[a]] + ll(x) * y);
		}

		bool none = true;
		rep(i, sn){
			if(s[i] >= int(1e6)){
				printf("%d\n", id[i]);
				none = false;
			}
		}
		if(none){
			puts("NA");
		}

		sn = 0;
	}
	return 0;
}