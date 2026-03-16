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

typedef long long Int; 
#pragma warning(disable : 4996)
#define REP(i,n) for(int i = 0 ; i < n ; ++i)
#define REPS(a,i,n) for(int i = a ; i < n ; ++i)
using namespace std;




int main(){


	int a, b, c;
	int t(0), h(0);
	while (scanf("%d,%d,%d", &a, &b, &c) != EOF){
		if (a + b < c || a + c < b || b + c < a || !a || !b || !c)continue;


		if (a*a + b*b == c*c)
			++t;

		if (a == b)
			++h;

	}
	cout << t << endl << h << endl;

	return 0;
}