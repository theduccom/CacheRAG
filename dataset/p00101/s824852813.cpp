#include<iostream>
#include<string>
using namespace std;

int main()
{
	int N;
	string buf;
	getline(cin, buf);
	N = stoi(buf);

	for(int i = 0; i < N; i++)
	{
		string str;
		getline(cin, str);

		for(int j = 6; j < str.size(); j++)
		{
			if(str[j] == 'o')
			{
				if(str[j - 1] == 'n' &&
					str[j - 2] == 'i' &&
					str[j - 3] == 'h' &&
					str[j - 4] == 's' &&
					str[j - 5] == 'o' &&
					str[j - 6] == 'H' )
				{
					str[j] = 'a';
				}

			}
		}
		cout << str << endl;

	}
}