#include<stdio.h>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>
#include <iterator>
#include <list>
#include <map>     
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <iomanip>
#include <stack>
#include <string>
#include <vector>
using namespace std;
#define ll long long
#define ld long double
#define rep(a,t) for(int a=0;a<t;a++) 
#define forever while(true)
#define Sort(a) sort(a.begin(),a.end())
#define Reverse(a) reverse(a.begin(),a.end())
#define pb push_back
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int a[10], v[2];
	while (cin >> a[0]) {
		rep(i1, 9) {
			char charsagashiteirunowisyo;
			int i = i1 + 1;
			cin >> charsagashiteirunowisyo >> a[i];
			if (i1 == 8) {
				cin >> charsagashiteirunowisyo >> v[0] >> charsagashiteirunowisyo >> v[1];
				break;
			}
		}
		int a_sum = 0;
		for (int i = 0; i < 10; i++) {
			a_sum += a[i];
		}
		int whatnuum = (int)(a_sum*v[0] / (double)(v[0] + v[1]));
	
		for (int i = 0; i < 10; i++) {
			whatnuum-=a[i];
			
			if (whatnuum <= 0) {
				cout << i+1<<endl;
				break;
			}
		
		}
	}
	return 0;
}
