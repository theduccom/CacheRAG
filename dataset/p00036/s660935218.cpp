#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <bitset>
#include <algorithm>
#include <numeric>
#include <utility>
#include <sstream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <climits>
 
#define REP(i,b,n) for(int i=b;i<n;++i)
#define REPR(i,b,n) for(int i=n-1;i>=b;--i)
#define CLR(mat) memset(mat, 0, sizeof(mat))
#define NCLR(mat) memset(mat, -1, sizeof(mat))
#define EACH(i, c) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); ++i)
#define EXIST(s, e) ((s).find(e) != (s).end())
#define BIT(n, b) ((n>>b) & 1)
#define PI acos(-1.0)

#define LIM 1000010

using namespace std;

static const double EPS = 1e-9;
typedef pair<int, int> pii;
typedef long long ll;

int dist_fl[] = {9, 24, 3, 15, 10, 17, 8};
vector<string> surf(8);

char solve(){

	int cnt = 0, dist = 0;
	
	for(int i=0; i < 8; ++i){
		for(int j=0; j<8; ++j){
			
			if(cnt!=0)
				dist++;
			
			if(surf[i][j]=='1')
				cnt++;
			
			if(cnt==4){
				for(int k=0; k<7; ++k){
					if(dist_fl[k]==dist)
						return (char)('A'+k);
				}
			}
		}
	}
}

int main(){
		
	while(cin>>surf[0]>>surf[1]>>surf[2]>>surf[3]
				>>surf[4]>>surf[5]>>surf[6]>>surf[7], !cin.eof()){
		
		cin.ignore();
		cout << solve() << endl;
	}
	
	return 0;
}
		