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

bool b[1000000];

int main()
{
	memset(b,1,1000000);
	b[0] = b[1] = false;
	for(int i = 2; i < 1000; i++)
		if(b[i]) for(int j = i * 2; j < 1000000; j+=i) b[j] = false;

	int n;
	while(cin>>n,n){
		int ans = 0;
		int i = 0;
		int cnt = 2;
		for (int i = 0; i < n; i++){
			while(!b[cnt])cnt++;
			ans += cnt;
			cnt++;
		}
		cout << ans <<endl;
	}
	return 0;
}