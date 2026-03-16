#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	int a=0,b=0,o=0,ab=0;
	while(cin >> str){
		if(str[str.size () -1] == 'A') a += 1;
		else if(str[str.size() - 1] == 'B') {
			if(str[str.size() -2] == 'A') ab += 1;
			else b += 1;
		}
		else if (str[str.size() - 1]) o += 1;

	}
	cout << a << endl << b << endl << ab << endl << o << endl;
	return 0;
}