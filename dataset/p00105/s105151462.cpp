#include<map>
#include<set>
#include<string>
#include<iostream>

using namespace std;

int main()
{
	string key;
	int page;
	map< string,set<int> > dic;

	while(cin>>key>>page)	dic[key].insert(page);

	map< string,set<int> >::iterator it_dic;
	for(it_dic=dic.begin();it_dic!=dic.end();it_dic++){
		cout<<it_dic->first<<endl;
		set<int>::iterator it;
		for(it=it_dic->second.begin();it!=it_dic->second.end();it++){
			if(it!=it_dic->second.begin())	cout<<" ";
			cout<<*it;
		}
		cout<<endl;
	}

	return 0;
}