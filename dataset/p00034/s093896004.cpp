#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <math.h>
#include <functional>
#include <algorithm>
#include <utility>
#include <numeric>

typedef long long Int; 
#pragma warning(disable : 4996)
#define REP(i,n) for(int i = 0 ; i < n ; ++i)
#define REPS(a,i,n) for(int i = a ; i < n ; ++i)
using namespace std;



vector<Int> eki(10);
int main(){

	while (scanf("%lld,", &eki[0]) != EOF){
		REPS(1, i, 10){
			scanf("%lld,", &eki[i]);
		}
		double v1,v2;
		scanf("%lf,%lf", &v1, &v2);

		double rate = ((double)v1 / (v1 + v2));

		Int sum = accumulate(eki.begin(), eki.end(), 0);

		double k = sum*rate;

		int ans = 0;
		int ed = 0;
		for (; ed < k && ans < 10;ans++){
			ed += eki[ans];
		}

		cout << ans << endl;
	}

	return 0;
}