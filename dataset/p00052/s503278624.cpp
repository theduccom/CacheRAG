#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int s,ans;
	while(1)
	{
		cin >> s;
		if(s==0)break;
		ans=0;
		while(1)
		{
			ans += s/5;
			s /= 5;
			if(s==0)break;
		}
		cout << ans << endl;
	}
	return 0;
}