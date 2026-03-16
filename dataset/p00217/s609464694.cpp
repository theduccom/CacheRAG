#include<iostream>
#include<map>
#include<cstdio>

using namespace std;

int main()
{
	int num;
	map<int, int, greater<int> > mp;

	while(cin >> num, num)
	{
		mp.clear();

		int patient, walk1, walk2;
		for(int i = 0; i < num; i++)
		{
			cin >> patient >> walk1 >> walk2;
			mp.insert( make_pair( walk1 + walk2 , patient ) );
		}

		map<int,int>::iterator it = mp.begin();
		printf("%d %d\n",(*it).second ,(*it).first);		
	}
	return 0;
}