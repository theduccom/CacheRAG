#include<iostream>
#include<vector>
#include<numeric>

double SumOfVector(const std::vector<double>& vec)
{
	double sum=0;

	for(size_t i=0; i<vec.size(); ++i)
	{
		sum += vec[i];
	}
	
	return sum;
}

double Sequence(double a)
{
	std::vector<double> vec(10);

	vec[0] = a;

	int oddeven = 2;

	for(size_t i=1; i<vec.size(); ++i)
	{
		vec[i] = (oddeven%2==0 ? vec[i-1]*2.0 : vec[i-1]/3.0);

		++oddeven;
	}

	return SumOfVector(vec);
}

int main()
{
	double a;

	while(std::cin >> a)
	{
		printf("%10.7f\n",Sequence(a));
	}

}