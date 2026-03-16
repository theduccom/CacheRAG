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
typedef pair<int, int> pii;
typedef complex<double> Point;

typedef map<int, pair<int, long long> > mipill;

int main()
{
	int n;
	while(scanf("%d", &n), n){
		mipill data;
		rep(i, n){
			int a, b, c;
			scanf("%d%d%d", &a, &b, &c);
			long long sum = ((long long)b) * c;
			if(data.count(a))
				data[a].second += sum;
			else
				data[a] = make_pair(data.size(), sum);
		}

		vector<pii> v;
		for(mipill::iterator itr = data.begin(); itr != data.end(); ++itr){
			if(itr->second.second >= 1000000ll)
				v.push_back(pii(itr->second.first, itr->first));
		}

		sort(v.begin(), v.end());
		rep(i, v.size()){
			printf("%d\n", v[i].second);
		}
		if(v.empty())
			puts("NA");
	}
	return 0;
}