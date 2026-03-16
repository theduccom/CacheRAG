#include <iostream>
#include <string>

using namespace std;

int main()
{
	string crypt;

	while (cin >> crypt){
		int index;

		while ((index = crypt.find('@')) != string::npos){
			string enc(crypt[index + 1] - '0', crypt[index + 2]);
			crypt = crypt.substr(0, index) + enc + crypt.substr(index + 3, crypt.size() - index - 3);
		}

		cout << crypt << endl;
	}

	return (0);
}