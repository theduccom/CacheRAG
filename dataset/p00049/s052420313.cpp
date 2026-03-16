#include<iostream>
int main()
{
	int A = 0, B = 0, AB = 0, O = 0;
	while (true)
	{
		int num;
		char blood[3];
		char comma;
		std::cin >> num >> comma >> blood;
		if (std::cin.eof())
		{
			break;
		}
		if (blood[1] == 'B')
		{
			AB++;
		}
		else
		{
			switch (blood[0])
			{
			case 'A':A++; break;
			case 'B':B++; break;
			case 'O':O++; break;
			}
		}
	}
	std::cout << A << std::endl;
	std::cout << B << std::endl;
	std::cout << AB << std::endl;
	std::cout << O << std::endl;
	return 0;
}
