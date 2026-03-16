#include<iostream>
#include<vector>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
	while (1)
	{
		int a;
		cin >> a;
		if (a == 0)break;
		vector<int>tate(a+1);
		for (int b = 0; b < a; b++) 
		{
			vector<int>yoko(a);
			int s = 0;
			for (int c = 0; c < a; c++)
			{
				int d;
				cin >> d;
				yoko[c] = d;
				s +=d;
				tate[c] += d;
			}
			for (int k : yoko) {
				cout << setw(5) << k;
			}
			tate[a] += s;
			cout << setw(5) << s <<endl;
		}
		for (int k : tate) {
			cout << setw(5) << k;
		}
		cout << endl;
	}
}