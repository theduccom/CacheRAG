#include<iostream>
#include<string>
#include<map>
#include<set>
using namespace std;

int main()
{
	string s;
	int n;
	map< string, set<int> > index;
	map< string, set<int> >::iterator it;
	set<int>::iterator its;
	while (cin>>s>>n)
		index[s].insert(n);
	for (it = index.begin(); it != index.end(); it++) {
		cout<<(*it).first<<endl;
		for (its = index[(*it).first].begin(); its != index[(*it).first].end(); its++) {
			if (its != index[(*it).first].begin()) cout<<" ";
			cout<<*its;
		}
		cout<<endl;
	}
	return 0;
}