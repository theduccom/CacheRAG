#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<vector>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
int main()
{
	string s;
	while(1)
	{
		getline(cin,s);
		if(cin.eof())break;
		int slidenum=0,len = s.size();
		string ss = s;
		rep(i,26)
		{
			rep(j,len)
			{
				if(s[j]>='a' && s[j]<='z'){ss[j] = ((s[j] - 'a' + i) % 26) +'a';}
			}
			int index[3];
			index[0] = ss.find("this");
			index[1] = ss.find("that");
			index[2] = ss.find("the");
			
			if(index[0]!=string::npos || index[1]!=string::npos || index[2]!=string::npos)break;
		}
		cout << ss<<endl;
	}

	return 0;
}