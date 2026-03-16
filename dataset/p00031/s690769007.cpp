#include<iostream>
using namespace  std;

int main()
{
	int w;
	while (cin >> w)
	{
		int weight[] = {512,256,128,64,32,16,8,4,2,1};
		bool used[] = {false,false,false,false,false,false,false,false,false,false};
		int i = 0;
		while (w > 0 && i < 10)
		{
			if (w < weight[i])
			{
				i++;
			}
			else
			{
				w -= weight[i];
				used[i] = true;
				i++;
			}
		}
		bool f = false;
		for (i = 9; i >= 0; i--)
		{
			if (used[i])
			{
				if (!f)cout << weight[i];
				else cout << " " <<weight[i];
				f = true;
			}
		}
		cout << endl;
	}
	return 0;
}