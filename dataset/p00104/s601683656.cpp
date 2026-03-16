#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	int h,w;
	while(cin>>h>>w&&h)
	{
		string a[120];
		for(int i=0;i<h;i++)
		{
			cin>>a[i];
		}
		pair<int,int> p(0,0);
		map< pair<int,int>,int > m;
		m[p]=1;
		bool ok=true;
		while(ok)
		{
			char now=a[p.first][p.second];
			switch(now)
			{
			case '^':
				p.first--;
				break;
			case '>':
				p.second++;
				break;
			case 'v':
				p.first++;
				break;
			case '<':
				p.second--;
				break;
			case '.':
				cout<<p.second<<" "<<p.first<<endl;
				ok=false;
				break;
			}
			if(ok&&m.count(p))
			{
				cout<<"LOOP"<<endl;
				break;
			}
			m[p]=1;
		}
		
	}
	
}