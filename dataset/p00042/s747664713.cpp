#include<iostream>
#include<vector>
int main()
{
	for (int i = 1;; i++)
	{
		int W;
		std::cin >> W;
		if (W == 0)
		{
			break;
		}
		int N;
		std::cin >> N;
		std::vector<std::vector<int>>table(N + 1, std::vector<int>(W + 1, -1));
		table[0][0] = 0;
		for (int n = 0; n < N; n++)
		{
			int vi, wi;
			char foo;
			std::cin >> vi >> foo >> wi;
			for (int w = 0; w <= W; w++)
			{
				if (table[n][w] != -1)
				{
					if (table[n + 1][w] < table[n][w])
					{
						table[n + 1][w] = table[n][w];
					}
					if (w + wi <= W)
					{
						table[n + 1][w + wi] = table[n][w] + vi;
					}
				}
			}
		}
		int max_value = 0;
		int weight;
		for (int w = 0; w <= W; w++)
		{
			if (table[N][w] > max_value)
			{
				max_value = table[N][w];
				weight = w;
			}
		}
		std::cout << "Case " << i << ":" << std::endl;
		std::cout << max_value << std::endl;
		std::cout << weight << std::endl;
	}
}
