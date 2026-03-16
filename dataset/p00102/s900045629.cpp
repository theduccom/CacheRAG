#include<iostream>

using namespace std;

int main()
{
	while(1)
	{
		int data[11][11] = {0};
		int n;
		cin >> n;
		if(n == 0) break;
		for(int y = 0;y <= n;y++)
		{
			for(int x = 0;x <= n;x++)
			{
				if(y < n && x < n) cin >> data[y][x];
				if(x < n) data[y][n] += data[y][x];
				if(y < n) data[n][x] += data[y][x];
				cout.width(5);
				if(x < n || y < n) cout << data[y][x];
				else cout << data[y][x] / 2;
			}
			cout << endl;
		}
	}
	return 0;
}