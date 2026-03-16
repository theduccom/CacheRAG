#include <bits/stdc++.h>

using namespace std;

typedef map<string, priority_queue<int, vector<int>, greater<int> > > Book; 

int main()
{

    int page;
    string word;
    Book book;

    while(cin >> word >> page)
    {
        book[word].push(page);
    }

    for(Book::iterator it = book.begin(); it != book.end(); it++)
    {
        cout << it->first << endl;
        while(!(it->second.empty()))
        {
            cout << it->second.top();
            cout << (it->second.size() == 1 ? '\n' : ' ');
            it->second.pop();
        }
    }

}