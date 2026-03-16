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
#include <iostream>
#include <map>
#include <functional>
#include <cstdlib>
#include <numeric>
#include <queue>
#include <complex>
#include <sstream>
#include <stack>

using namespace std;

#define reep(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reep(i,0,n)

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef complex<double> Point;

const int dy[] = {0, -1, 0, 1};
const int dx[] = {-1, 0, 1, 0};
map<int, int> table;

int main()
{
	int depth = 0;
	int next  = -1;
	map<int, int> table;
	queue<int> Q;
	Q.push(01234567);
	while(!Q.empty()){
		int num = Q.front();
		Q.pop();
		if(table.count(num))
			continue;
		
		if(num == next){
			next = -1;
			++depth;
		}
		table[num] = depth;
		
		int zero;
		rep(i, 8){
			if(((num>>(3*i)) & 7) == 0){
				zero = i;
				break;
			}
		}
		
		rep(i, 4){
			int py = zero / 4 + dy[i];
			int px = zero % 4 + dx[i];
			if(py<0 || 2<=py || px<0 || 4<=px)
				continue;
			
			int dst = py*4 + px;
			int tmp[] = {(num >> (3*dst)) & 7, (num >> (3*zero)) & 7};
			int ko = (num | (7<<(3*zero))) & (((1<<24)-1-(7<<(3*zero))) | (tmp[0] << (3*zero)));
			ko = (ko | (7<<(3*dst))) & (((1<<24)-1-(7<<(3*dst))) | (tmp[1] << (3*dst)));
			if(!table.count(ko)){
				Q.push(ko);
				if(next == -1)
					next = ko;
			}
		}
	}

	for(;;){
		int num = 0;
		rep(i, 8){
			int a;
			if(scanf("%d", &a) == EOF)
				return 0;
			num = num*8 + a;
		}
		printf("%d\n", table[num]);
	}
}