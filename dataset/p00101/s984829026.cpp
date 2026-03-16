#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num;
	string before = "Hoshino", after = "Hoshina";

	cin >> num;
	cin.get();

	for(int i = 0; i < num; i++)
	{
		string str;
		getline(std::cin, str);
		string::size_type pos;
		for(pos = str.find(before); pos != string::npos; pos = str.find(before, after.size() + pos))
		{
			str.replace(pos, before.size(), after);
		}
		cout << str << endl;
	}

	return 0;
}