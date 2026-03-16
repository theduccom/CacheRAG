#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;
int st(char t)
{
	switch(t)
	{
		case 'I':return 1;
		case 'V':return 5;
		case 'X':return 10;
		case 'L':return 50;
		case 'C':return 100;
		case 'D':return 500;
		case 'M':return 1000;
		default :return 0;
	}
}
int main()
{
	char num[101];
	while(cin >> num)
	{
		int ans=0;
		int len=strlen(num);
		for(int i=0;i<len;i++)
		{
			if(st(num[i])<st(num[i+1]))
			{
				ans -= st(num[i]);
				continue;
			}
			ans += st(num[i]);
		}
		cout << ans << endl;
	}
	return 0;
}