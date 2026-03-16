#include <string>
#include <cstdio>
#include <cstring>
#include <vector>
#include <queue>
#include <set>
#include <utility>
#include <algorithm>
#include <numeric>
#include <iostream>

using namespace std;
template<class T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }

bool b[60000];

int main()
{
	memset(b,1,sizeof(b));
	b[0] = b[1] = false;
	for (int i = 2; i < 300; i++)
		if(b[i]) for(int j = i * 2; j < 60000; j += i) b[j] = false;

	int n;
	while(cin>>n){
		int a,c;
		for (int i = n - 1; i >= 0 ; i--) if(b[i]){ a = i; break;}
		for (int i = n + 1; i < 60000; i++) if(b[i]){ c = i; break; }
		printf("%d %d\n",a,c);
	}
	return 0;
}