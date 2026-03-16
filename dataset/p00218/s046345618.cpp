#include <iostream>

using namespace std;

int main()
{
	int N, A, B, C;

	while (true)
	{
		cin >> N;

		if (N == 0) { break; }

		for (int i = 0; i < N; i++)
		{
			cin >> A >> B >> C;

			if (A == 100 || B == 100 || C == 100)
			{
				cout << "A" << endl;
			}
			else if (A + B >= 180)
			{
				cout << "A" << endl;
			}
			else if (A + B + C >= 240)
			{
				cout << "A" << endl;
			}
			else if (A + B + C >= 210)
			{
				cout << "B" << endl;
			}
			else if (A + B + C >= 150 && (A >= 80 || B >= 80))
			{
				cout << "B" << endl;
			}
			else
			{
				cout << "C" << endl;
			}
		}
	}

	return 0;
}