#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N, D1, D2; vector<int> P, D;

	while (true)
	{
		cin >> N;

		if (N == 0) { break; }

		P = vector<int>(N);
		D = vector<int>(N);

		for (int i = 0; i < N; i++)
		{
			cin >> P[i] >> D1 >> D2;

			D[i] = D1 + D2;
		}

		int maxptr = distance(D.begin(), max_element(D.begin(), D.end()));

		cout << P[maxptr] << ' ' << D[maxptr] << endl;
	}

	return 0;
}