#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		string s1,s2;
		cin>>s1>>s2;
		reverse(s1.begin(),s1.end());
		reverse(s2.begin(),s2.end());
		int r = 0;
		string res = "";
		for(int c=0;c<max(s1.size(),s2.size());c++)
		{
			int s = r;
			r = 0;
			if(c < s1.size()) s += s1[c] -'0';
			if(c < s2.size()) s+= s2[c] - '0';

			r = s/10;
			s%=10;
			res = string(1,s+'0')+res;

		}
		if(r)
		{
			res = string(1,r+'0')+res;
		}
		cout<<(res.size() <= 80?res:"overflow")<<endl;
	}
}