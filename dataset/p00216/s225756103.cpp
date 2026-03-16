#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	int w;
	while(cin >> w)
	{
		if(w == -1) break;
		int ans = 1150;

		REP(i,1,w+1)
		{
			if(i <= 10) continue;
			else if(i <= 20) ans += 125;
			else if(i <= 30) ans += 140;
			else ans += 160;
		}

		cout << 4280 - ans << endl;
	}
	return 0;
}