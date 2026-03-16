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


int main(){
	vector<double> ms;
	double a;
	while (cin >> a){
		ms.push_back(a);
	}
	sort(ms.begin(), ms.end());
	printf("%.1lf",ms[ms.size()-1]-ms[0]);
	puts("");
}