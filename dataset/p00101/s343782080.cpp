#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	string str;
	char tmp[1010];
	cin >> n;
	cin.ignore();
	while (n > 0){
		cin.getline(tmp, sizeof(tmp));
		str = tmp;
		int len = 0;
		while (1){
			len = str.find("Hoshino", len);
			if (len == -1)  break;
			str[len + 6] = 'a';
		}
		cout << str << endl;
		n--;
	}
	return (0);
}