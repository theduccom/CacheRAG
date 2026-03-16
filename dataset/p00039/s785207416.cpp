//0039 Roman Figure

#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(void)
{
	string str;
	while(cin >> str)
	{
		int s = 0;
		for(int i = 0; i < str.size(); i++)
		{
			char c = str[i];
			char next = (i==str.size()-1 ? 0 : str[i+1]);
			switch(c)
			{
			case 'I': 
				if(next == 'V') s += 4, i++;
				else if(next == 'X') s += 9, i++;
				else s+=1;
				break;
			case 'V':
				s += 5;
				break;
			case 'X':
				if(next == 'L') s += 40, i++;
				else if(next== 'C') s += 90, i++;
				else s+=10;
				break;
			case 'L':
				s += 50;
				break;
			case 'C':
				if(next == 'D') s += 400, i++;
				else if(next =='M') s += 900, i++;
				else s += 100;
				break;
			case 'D':
				s += 500;
				break;
			case 'M':
				s += 1000;
				break;
			}
		}
		cout << s << endl;
	}
	return 0;
}