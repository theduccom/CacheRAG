#include <bits/stdc++.h>

class Solve {
private:
	std::string inputStr;

	int64_t calcAdd(int& s_i)
	{
		int64_t ret{calcMulti(s_i)};
		while (inputStr[s_i] == '+' || inputStr[s_i] == '-')
		{
			char ope{inputStr[s_i]};
			s_i++;
			if (ope == '+') ret += calcMulti(s_i);
			else ret -= calcMulti(s_i);
		}
		return ret;
	}

	int64_t calcMulti(int& s_i)
	{
		int64_t ret{calcNum(s_i)};
		while (inputStr[s_i] == '*' || inputStr[s_i] == '/')
		{
			char ope{inputStr[s_i]};
			s_i++;
			if (ope == '*') ret *= calcNum(s_i);
			else ret /= calcNum(s_i);
		}
		return ret;
	}

	int64_t calcNum(int& s_i)
	{
		int64_t ret{};
		if (inputStr[s_i] == '(')
		{
			s_i++;
			ret = calcAdd(s_i);
			s_i++;
		}
		else
		{
			while (isdigit(inputStr[s_i]))
			{
				ret = 10 * ret + inputStr[s_i] - '0';
				s_i++;
			}
		}
		return ret;
	}

public:
	bool is_last_query{};
	Solve()
	{
		std::cin >> inputStr;
		int s_i{};
		printf("%lld\n", calcAdd(s_i));
	}
};

int main()
{
	int N;
	scanf("%d", &N);
	for (int i{}; i < N; i++)
		Solve();

	return 0;
}
