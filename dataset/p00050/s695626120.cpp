#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	string str;
	
//	ifstream ifs(stdin);
	getline(cin, str);
	
	int len = str.size();
	for (int i = 0; i < len; i++){
		if (str.substr(i, 5) == "apple"){
			str.replace(i, 5, "peach");
		}
		else if (str.substr(i, 5) == "peach"){
			str.replace(i, 5, "apple");
		}
	}
	
	cout << str << endl;
	
	return 0;
}