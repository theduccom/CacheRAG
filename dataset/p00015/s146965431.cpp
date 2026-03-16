#include<iostream>
#include<string>
#include<vector>
int main(int, char**)
{
	int number = 0;
	std::cin >> number;

	std::string buff1;
	std::string buff2;
	for (int count = 0; number > count; ++count)
	{
		std::cin >> buff1 >> buff2;

		std::vector<std::string> sum;
		sum.reserve(10);
		int carry = 0;
		for (int offset = 0; buff1.length() > offset || buff2.length() > offset; offset += 8)
		{
			auto cutoff = [](const std::string& buff, const int offset)->int
			{
				if (buff.length() <= offset)
				{
					return 0;
				}
				if (buff.length() <= offset + 8)
				{
					return std::stoi(buff.substr(0, buff.length() - offset));
				}
				return std::stoi(buff.substr(buff.length() - offset - 8, 8));
			};
			int num1 = cutoff(buff1, offset);
			int num2 = cutoff(buff2, offset);
			std::string sum_buff = std::to_string(num1 + num2 + carry);
			
			if (8 < sum_buff.length())
			{
				carry = std::stoi(sum_buff.substr(0, 1));
				sum.emplace_back(sum_buff.substr(1));
			}
			else
			{
				carry = 0;
				sum.emplace_back(sum_buff);
			}
		}
		if (10 < sum.size() || (sum.size() == 10 && sum[0].length() == 8 && 0 != carry))
		{
			std::cout << "overflow";
		}
		else
		{
			if (0 != carry)
			{
				std::cout << std::to_string(carry);
			}
			for (int index = static_cast<int>(sum.size()) - 1; 0 <= index; --index)
			{
				if (index != static_cast<int>(sum.size()) - 1 && 8 != sum[index].length())
				{
					for (int count = 0; 8 - sum[index].length() > count; ++count)
					{
						std::cout << "0";
					}
					std::cout << sum[index];
				}
				else
				{
					std::cout << sum[index];
				}
			}
		}
		std::cout << std::endl;
	}
}
