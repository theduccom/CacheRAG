#include <iostream>
#include <vector>

using namespace std;

void solve()
{
	int num;
	while(cin >> num)
	{
		if(num == 0)
		{
			break;
		}
		int multipleOfFive = 5;
		vector<int> Vec;
		while(num >= multipleOfFive)
		{
			Vec.push_back(multipleOfFive);
			multipleOfFive *= 5;
		}
		int ans = 0;
		for(int i = 0; i < Vec.size(); ++i)
		{
			ans += num / Vec[i];
		}
		cout << ans << endl;
	}
}

int main()
{
	solve();
	return(0);
}