#include <iostream>
#include <string>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main()
{
	int n;
	cin >> n;
	cin.ignore();
	rep(i,n)
	{
		string s;
		getline(cin,s);

		if(s.length() < 6)
		{
			cout << s << endl;
		}
		else
		{
			rep(j,s.length()-6)
			{
				if(s[j] == 'H' && s[j+1] == 'o' && s[j+2] == 's' && s[j+3] == 'h' && s[j+4] == 'i' && s[j+5] == 'n' && s[j+6] == 'o')
				{
					s[j+6] = 'a';
					j += 6;
				}
			}
			cout << s << endl;
		}
		
	}
	return 0;
}