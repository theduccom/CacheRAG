#include <vector>
#include <iostream>

using namespace std;

int main()
{
	long long N, X, Y, Z;

	while (true)
	{
		cin >> N;

		if (N == 0) { break; }

		vector<long long> P(4001, 0);

		vector<bool> ok(4001, false);

		int count_ = 0;

		for (int i = 0; i < N; i++)
		{
			cin >> X >> Y >> Z;

			P[X] += Y * Z;

			if (P[X] >= 1000000 && ok[X] == false)
			{
				cout << X << endl; ok[X] = true; count_++;
			}
		}

		if (!count_)
		{
			cout << "NA" << endl;
		}
	}

	return 0;
}