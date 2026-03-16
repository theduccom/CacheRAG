#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<algorithm>

void echo_index(std::multimap<std::string,int> &index);
void echo_page(std::vector<int> &chunk_page);

//------------------------------main----------------------------------
int main()
{
	using namespace std;
	
	string ward;
	int page;
	
	multimap<string,int> index;
	
	for(;1;)
	{
		cin>>ward>>page;
		if(cin.eof())
		{
			echo_index(index);
			break;
		}
		index.insert(pair<string,int>(ward,page));
	}
	
	return 0;
}
//------------------------------------------------------------

void echo_index(std::multimap<std::string,int> &index)
{
	using namespace std;
	
	multimap<string,int>::iterator itr;
	vector<int> chunk_page;
	
	itr=index.begin();
	string pre_ward=itr->first;
	cout<<itr->first<<endl;
	chunk_page.push_back(itr->second);
	++itr;
	
	for(;itr!=index.end();++itr)
	{
		if(pre_ward==itr->first)
		{
			chunk_page.push_back(itr->second);
		}
		else
		{
			echo_page(chunk_page);
			cout<<itr->first<<endl;
			chunk_page.push_back(itr->second);
		}
		pre_ward=itr->first;
	}
	
	echo_page(chunk_page);
}

void echo_page(std::vector<int> &chunk_page)
{
	using namespace std;
	
	sort(chunk_page.begin(),chunk_page.end());
	
	vector<int>::iterator itr;
	itr=chunk_page.begin();
	cout<<*itr;
	++itr;
	
	for(;itr!=chunk_page.end();++itr)
	{
		cout<<" "<<*itr;
	}
	cout<<endl;
	
	chunk_page.clear();
}