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
	scanf("%d", &n);
	
	rep(i, n){
		int out = 0;
		int point = 0;
		bool base[3] = {false};

		while(out < 3){
			char str[8];
			scanf("%s", str);
			if(strcmp(str, "HIT") == 0){
				point += base[2];
				for(int j=2; j>0; --j)
					base[j] = base[j-1];
				base[0] = true;
			}else if(strcmp(str, "HOMERUN") == 0){
				++point;
				rep(i, 3){
					point += base[i];
					base[i] = false;
				}
			}else
				++out;
		}
		printf("%d\n", point);
	}

	return 0;
}