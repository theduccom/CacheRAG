#include <iostream>

using namespace std;

int main()
{
	int N, A, B, C, R, Q;

	while (true)
	{
		cin >> A >> B >> C;

		if (A == 0 && B == 0 && C == 0)
		{
			break;
		}

		if (A > B) { swap(A, B); }
		if (A > C) { swap(A, C); }
		if (B > C) { swap(B, C); }

		Q = A * A + B * B;

		cin >> N;

		for (int i = 0; i < N; i++)
		{
			cin >> R;

			if (R * R * 4 > Q)
			{
				cout << "OK" << endl;
			}
			else
			{
				cout << "NA" << endl;
			}
		}
	}

	return 0;
}