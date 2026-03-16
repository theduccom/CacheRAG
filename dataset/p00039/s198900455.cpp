#include <iostream>
#include <string>
using namespace std;

char al[]={'I','V','X','L','C','D','M'};
#define REP(i,n) for(int i=0; i<n; ++i)

int getv(char a)
{
	int ret=1;
	REP(i,7)
	{
		if(a==al[i]) return ret;
		
		if(i%2==0) ret*=5;
		else ret*=2;

	}
}

int main()
{
	string s;
	while(cin >> s)
	{
		s+='I';
		int ret=0;
		REP(i,s.size()-1)
		{
			ret+=getv(s[i])*(getv(s[i]) >= getv(s[i+1]) ? 1:-1);
		}
		cout << ret << endl;
	} 
}