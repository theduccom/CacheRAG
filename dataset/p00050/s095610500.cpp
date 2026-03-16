// 2011/03/23 Tazoe

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string str;
	getline(cin, str);

	vector<string::size_type> apple_pos;
	for(string::size_type pos=str.find("apple"); pos!=string::npos; pos=str.find("apple", 5+pos))
		apple_pos.push_back(pos);

	vector<string::size_type> peach_pos;
	for(string::size_type pos=str.find("peach"); pos!=string::npos; pos=str.find("peach", 5+pos))
		peach_pos.push_back(pos);

	for(int i=0; i<apple_pos.size(); i++)
		str.replace(apple_pos[i], 5, "peach");

	for(int i=0; i<peach_pos.size(); i++)
		str.replace(peach_pos[i], 5, "apple");

	cout << str << endl;

	return 0;
}