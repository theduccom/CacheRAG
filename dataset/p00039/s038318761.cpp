#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

int RomantoArabic(char c)
{
	switch(c)
	{
	case 'I':
		return 1;
	case 'V':
		return 5;
	case 'X':
		return 10;
	case 'L':
		return 50;
	case 'C':
		return 100;
	case 'D':
		return 500;
	case 'M':
		return 1000;
	}

	return -1;
}

int RomanFigure(const std::string& figure)
{
	int temp = RomantoArabic(figure[figure.length()-1]);

	for(size_t i=1; i<figure.length(); ++i)
	{
		temp = RomantoArabic(figure[figure.length()-1-i])<RomantoArabic(figure[(figure.length()-1)-(i-1)]) ?
			temp - RomantoArabic(figure[figure.length()-1-i]) :
			temp + RomantoArabic(figure[figure.length()-1-i]);
	}

	return temp;
}

int main()
{
	std::string figure;

	while(std::cin >> figure)
	{
		std::cout << RomanFigure(figure) << '\n';
	}

}