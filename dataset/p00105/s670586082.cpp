#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

class package
{
public:
	string word;
	int page;
	package(string _word, int _page)
	{
		word = _word;
		page = _page;
	}

};
bool compare(const package & left, const package & right)
{
	if(left.word < right.word)
	{
		return true;
	}
	if(left.word == right.word && left.page <= right.page)
	{
		return true;
	}
	return false;
}
int main()
{

	vector<package> book;
	
	while(1)
	{
		string str = "";
		int page;
		cin >> str;
		if(str == "")
		{
			break;
		}
		cin >> page;
		package index(str, page);
		book.push_back(index);
	}

	sort(book.begin(), book.end(), compare);

	string lastWord = book[0].word;
	cout << book[0].word << endl;
	cout << book[0].page;

	for(int i = 1; i < book.size(); i++)
	{
		if(lastWord == book[i].word)
		{
			cout << " " << book[i].page;
			
		}
		else
		{
			cout << endl;
			cout << book[i].word << endl;
			cout << book[i].page;
			lastWord = book[i].word;
		}
	}
	cout << endl;
	


}