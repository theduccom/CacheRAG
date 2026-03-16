#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>

std::vector<size_t> SetPosList(std::string str, std::string keystr)//先頭に目的のキーがある場合を除く
{
	std::vector<size_t> posList;

	size_t i=0;

	while(1)
	{
		i = str.find(keystr,i);

		if(i==std::string::npos)
		{
			break;
		}

		posList.push_back(i);

		++i;
	}

	return posList;
}


int main()
{
	std::string str;

	getline(std::cin,str);

	std::vector<size_t> posP,posA;

	size_t i=0;

	if(str.find("Apple",i)==0)
	{
		str.replace(0,5,"Peach");
	}
	else if(str.find("Peach",i)==0)
	{
		str.replace(0,5,"Apple");
	}

	posA = SetPosList(str, "apple");

	posP = SetPosList(str, "peach");

	for(size_t j=0; j<posP.size(); ++j)
	{
		str.replace(posP[j],5,"apple");
	}

	for(size_t j=0; j<posA.size(); ++j)
	{
		str.replace(posA[j],5,"peach");
	}

	std::cout << str << '\n';
}