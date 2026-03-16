#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	char ch;
	cin.get(ch);
	for(int i = 0;i < n;i++)
	{
		string str;
		while(1)
		{
			char inch;
			cin.get(inch);
			if(inch == '\n') break;
			str += inch;
		}
		while(1)
		{
			string::size_type idx = str.find("Hoshino");
			if(idx == string::npos) break;
			str[idx + 6] = 'a';
		}
		cout << str << endl;
	}
	
	return 0;
}