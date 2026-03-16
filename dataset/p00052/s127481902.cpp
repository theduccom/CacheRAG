#include <string>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <queue>
#include <set>
#include <utility>
#include <algorithm>
#include <numeric>
#include <iostream>
#include <iterator>
#include <sstream>

using namespace std;

int main()
{
	int n;
	while(cin>>n,n){
		int ans = 0;
		for (int i = n / 5; i > 0; i /= 5){
			ans += i;
		}
		cout << ans <<endl;
	}
	return 0;
}