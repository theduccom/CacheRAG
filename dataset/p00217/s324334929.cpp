#include <iostream>
using namespace std;
struct {int n, d[3];} p[10000];
int main()
{
	int n, i, m, l;
	while (cin >> n && n)
	{
		for (i = 0; i < n; i++)
		{
			cin >> p[i].n >> p[i].d[0] >> p[i].d[1];
			p[i].d[2] = p[i].d[0] + p[i].d[1];
			if (i == 0 || l < p[i].d[2]) m = p[i].n, l = p[i].d[2];
		}
		cout << m << " " << l << endl;
	}
}