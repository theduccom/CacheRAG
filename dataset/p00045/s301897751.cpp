#include <iostream>
#include <vector>

using namespace std;

void solve()
{
	vector<int> Vec1;
	vector<int> Vec2;
	int a, b;
	while(~scanf("%d,%d", &a,&b))
	{
		Vec1.push_back(a);
		Vec2.push_back(b);
	}
	int sum = 0;
	double Ave = 0;
	int n = Vec1.size();
	for(int i = 0; i < n; ++i)
	{
		sum += Vec1[i] * Vec2[i];
		Ave += Vec2[i];
	}
	cout << sum << endl;
	cout << (int)(Ave / n + 0.5) << endl;
}

int main()
{
	solve();
	return(0);
}