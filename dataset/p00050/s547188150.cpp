#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	size_t pos;
	
	getline(cin, str);
	
	while ( (pos = str.find("apple")) != string::npos ) str.replace(pos, 5, "-----");
	while ( (pos = str.find("peach")) != string::npos ) str.replace(pos, 5, "apple");
	while ( (pos = str.find("-----")) != string::npos ) str.replace(pos, 5, "peach");
	
	cout << str << endl;
	
	return 0;
}