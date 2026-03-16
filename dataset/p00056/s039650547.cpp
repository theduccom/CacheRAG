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

bool b[50000];

int main()
{
	memset(b,1,sizeof(b));
	b[0] = b[1] = false;
	for(int i = 2; i < sizeof(b); i++)
		if(b[i]) for(int j = i*2; j < sizeof(b); j += i) b[j] = false;

	int n;
	while(cin>>n,n){
		int ans = 0;
		for (int i = 2; i <= n/2; i++){
			if(b[i] && b[n-i]) ans++;
		}
		cout << ans << endl;
	}
	return 0;
}