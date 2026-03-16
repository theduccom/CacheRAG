#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	string str;
	
	getline(cin, str);
	int n = str.size();
	for(int i = 0; i < n; i++){
		
		string sub = str.substr(i, 5);
		if (sub == "apple"){
			str.replace(i, 5, "peach");
			i += 4;
		}
		else if(sub == "peach"){
			str.replace(i, 5, "apple");
			i += 4;
		}
	}
	puts(str.c_str());
	return(0);
}