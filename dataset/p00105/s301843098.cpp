#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	int page, n;
	string word;
	typedef map<string, map<int,int> > Dic;
	Dic dic;
	Dic::iterator ite1;
	map<int,int>::iterator ite2;
	while(cin >> word >> page)
	{
		dic[word][page]++;
	}
	for(ite1=dic.begin();ite1!=dic.end();++ite1)
	{
		cout << ite1->first << endl;
		n = 0;
		for(ite2=ite1->second.begin(); ite2 != ite1->second.end(); ++ite2)
		{
			if(n++) cout<< ' ';
			cout << ite2->first;
		}
		cout << endl;
	}
	return 0;
}