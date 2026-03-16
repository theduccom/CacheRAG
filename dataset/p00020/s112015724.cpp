#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string str;
	getline(cin, str);

	for(char& c : str){
		if(c >= 'a' && c <= 'z'){
			c += 'A' - 'a';
		}
	}


	cout << str << endl;


	return 0;
}