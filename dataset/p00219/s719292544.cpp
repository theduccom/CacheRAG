#include <vector>
#include <iostream>

using namespace std;

int main()
{
	int N, A; vector<int> C;

	while (true)
	{
		cin >> N;

		if (N == 0) { break; }

		C = vector<int>(10, 0);

		for (int i = 0; i < N; i++)
		{
			cin >> A;

			C[A]++;
		}

		for (int i = 0; i < 10; i++)
		{
			if (C[i] == 0)
			{
				cout << '-' << endl;
			}
			else
			{
				for (int j = 0; j < C[i]; j++)
				{
					cout << '*';
				}

				cout << endl;
			}
		}
	}

	return 0;
}