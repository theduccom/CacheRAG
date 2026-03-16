#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	int cnt = 0;
	while(cin >> str)
	{
		int len = str.size();
		if(len == 1) {
			cnt++;
			continue;
		}
		int len_half = len / 2, last = len - 1;
		bool hit = true;
		for(int i=0; i < len_half && hit; i++)
		{
			if(str[i] != str[last-i]) hit = false;
		}
		if(hit) cnt++;
	}
	cout << cnt << endl;

	return 0;
}