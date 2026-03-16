#include <bits/stdc++.h>

using namespace std;

int main()
{
	string set;
	int num;

	vector<string>namelist;
	map<string,int>P;
	map<string,int>count;

	int numberlist[1000][101]={};
	int i=0,j=0,k=0,l=0;

	while(cin >> set >> num)
	{
		if(!P[set])
		{
			i++;
			namelist.push_back(set);
			P[set]=i;
		}
		numberlist[P[set]][count[set]]=num;
		count[set]++;
	}

	for(j=0;j<i;j++)
	{

		for(k=j;k<i;k++)
		{
			if(namelist[j]>namelist[k])
			{
				swap(namelist[j],namelist[k]);
			}
		}
	}
	for(j=0;j<i;j++)
	{
		for(k=0;k<count[namelist[j]];k++)
		{
			for(l=k;l<count[namelist[j]];l++)
			{
				if(numberlist[P[namelist[j]]][k]>numberlist[P[namelist[j]]][l])
					swap(numberlist[P[namelist[j]]][k],numberlist[P[namelist[j]]][l]);
			}
		}
	}

	for(j=0;j<i;j++)
	{
		cout << namelist[j] << endl;
		for(k=0;k<count[namelist[j]];k++)
		{
			cout << numberlist[P[namelist[j]]][k];
			if(k!=count[namelist[j]]-1)cout << " ";
		}
		cout << endl;
	}

	return 0;
}