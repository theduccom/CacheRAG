#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

template <class Type>
Type dist(Type x, Type y)
{
	return sqrt(pow(x, 2) + pow(y, 2));
}

int main()
{
	const int DATASETS = 1000;

	double V[DATASETS];

	int X, H, K = 0;

	double A, B;

	while (true)
	{
		cin >> X >> H;

		if (X == 0 && H == 0) { goto Exit; }

		A = X;
		B = dist<double>(static_cast<double>(X) / 2, static_cast<double>(H));

		V[K] = static_cast<double>(X * X) + A * B * 2;

		K++;
	}

Exit:;

	for (int i = 0; i < K; i++)
	{
		cout << fixed << setprecision(15) << V[i] << endl;
	}

	return 0;
}