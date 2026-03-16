#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str;
	getline(cin, str);
	while (str.find("apple") != -1) str.replace(str.find("apple"), 5, "tempa");
	while (str.find("peach") != -1) str.replace(str.find("peach"), 5, "tempp");
	while (str.find("tempa") != -1) str.replace(str.find("tempa"), 5, "peach");
	while (str.find("tempp") != -1) str.replace(str.find("tempp"), 5, "apple");
	cout << str << endl;
	return 0;
}
