#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(void)
{
	map < string, vector<int> > index;

	string sbuf;
	int ibuf;

	while (cin>>sbuf>>ibuf)
	{
		index[sbuf].push_back(ibuf);
	}

	for (auto &elem : index)
	{
		sort(elem.second.begin(), elem.second.end());
		cout << elem.first << endl;
		for (auto vecElem : elem.second)
		{
			cout << vecElem;
			if (vecElem != *(elem.second.end() - 1))
			{
				cout<<" ";
			}
		}
		cout << endl;
	}
	return 0;
}