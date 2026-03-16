#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n,a,b;
	char str[16];
	
	cin >> n;
	while(n--)
	{
		cin >> str;
		vector<int> v;
		for(int i=0; str[i]; i++)
		{
			v.push_back(str[i]-'0');
		}
		
		a=b=0;
		sort(v.begin(), v.end());
		for(int i=0; i<v.size(); i++)
		{
			a*=10; a+=v[i];
		}
		reverse(v.begin(), v.end());
		for(int i=0; i<v.size(); i++)
		{
			b*=10; b+=v[i];
		}

		cout << b-a << endl;
	}
}