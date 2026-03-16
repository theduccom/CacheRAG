#include <iostream>
using namespace std;

int main()
{
	int N;
	while (cin >> N, N)
	{
		int cnt = 0;
		for (int i=1; i<=N; i++)
		{
			int a=0, t=i;
			while (t%5 == 0)
			{
				a++;
				t /= 5;
			}
			cnt += a;
		}
		cout << cnt << endl;
	}
}