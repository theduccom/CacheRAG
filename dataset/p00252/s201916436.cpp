#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
#include<queue>
#include<vector>
#include<functional>
#include<cmath>
#include<map>
#include<stack>
#include<set>
#include<numeric>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pl;

int main()
{
	int b1, b2, b3;
	cin >> b1 >> b2 >> b3;

	if ((b1 == 1 && b2 == 0 && b3 == 0) ||
		(b1 == 0 && b2 == 1 && b3 == 0) ||
		b1 == 0 && b2 == 0 && b3 == 0) {
		cout << "Close" << endl;
	}
	else
		cout << "Open" << endl;
		
	return 0;
}