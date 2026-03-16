#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
#include <queue>
#include <map>
#include <fstream>
#include <array>
#include <utility>
#include <functional>
#include <stack>
#include <math.h>
#include <numeric>
#include <set>

using namespace std;
typedef long long Int;
#define REP(i , x) for(Int i = 0 ; i < x ; ++i)
typedef pair<int, int> P;



int main()
{
	int n;
	while (cin >> n,n){
		int data[10];
		fill(data, data + 10, 0);

		REP(i, n){
			int a;
			cin >> a;
			++data[a];
		}
		REP(i, 10){
			if (data[i]){
				REP(j, data[i]){
					cout << "*";
				}
				cout << endl;
			}
			else{
				cout << "-" << endl;
			}
		}
	}
	return 0;
}