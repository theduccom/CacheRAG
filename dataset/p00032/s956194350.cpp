#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <stack>
#include <map>
using namespace std;

#define FOR(i,a,b) for(long long int i=(a);i<(b);i++)
#define REP(i,n) for(long long int i=0;i<(n);i++)
#define ALL(s) (s).begin(),(s).end()

#define PI 3.14159265358479

typedef long long ll;

int t = 0, h = 0, l1, l2, l3;

int main(){
	while (scanf("%d,%d,%d", &l1, &l2, &l3)!=EOF){
		if (pow(l3, 2) == pow(l1, 2) + pow(l2, 2)){
			t++;
		}
		if (l1 == l2){
			h++;
		}
	}
	cout << t << "\n" << h << "\n";
}