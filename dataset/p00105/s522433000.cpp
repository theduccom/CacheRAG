#include <iostream>
#include <map>
#include <list>
#include <algorithm>
using namespace std;

int main(){
    map <string, list<int> > book;
    string word;
    int page;
    while(cin >> word >> page){
        book[word].push_back(page);
    }
    map <string, list<int> >::iterator it = book.begin();
    while(it != book.end()){
        it->second.sort();
        it++;
    }
    it = book.begin();
    while(it != book.end()){
        cout << it->first << endl;
        list<int>::iterator list_it = it->second.begin();
        while(list_it != it->second.end()){
            if(list_it != it->second.begin()) cout << " ";
            cout << *list_it;
            list_it++;
        }
        cout << endl;
        it++;
    }
    return 0;
}