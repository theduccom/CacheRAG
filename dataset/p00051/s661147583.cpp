#include<iostream>
#include<vector>
#include<algorithm>

std::vector<int> CutByDigit8(int num)
{
	int exp10 = 1;

	std::vector<int> CuttedNumbers;

	for(int i=0; i<8; ++i)
	{
		CuttedNumbers.push_back((num%(exp10*10))/exp10);

		exp10 *= 10;
	}

	return CuttedNumbers;
}

int ComposeByDigit8(std::vector<int> v)
{
	int ComposedNum = 0;

	int exp10 = 1;

	for(size_t i=0; i<v.size(); ++i)
	{
		ComposedNum += v[i]*exp10;

		exp10 *= 10;
	}

	return ComposedNum;
}

void PrintVector(std::vector<int> v)
{
	std::for_each(v.begin(),v.end(),[](int n){std::cout << n << ' ';});

	std::cout << '\n';
}


int main()
{
	int n;

	std::cin >> n;

	int num;

	for(int i=0; i<n; ++i)
	{
		std::cin >> num;

		std::vector<int> max,min;

		max = CutByDigit8(num);

		std::sort(max.begin(),max.end());

		min = max;

		std::reverse(min.begin(),min.end());

		int resultMax = ComposeByDigit8(max); 
			
		int	resultMin = ComposeByDigit8(min);

		std::cout  << resultMax-resultMin << '\n';
	}

}