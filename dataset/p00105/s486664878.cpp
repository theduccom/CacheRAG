#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

int main()
{
    map<string, set<int> > m;
    string inp;
    int num;

    while (cin >> inp >> num) 
        m[inp].insert(num);

    map<string, set<int> >::iterator it = m.begin();
    while (it != m.end()) {
        cout << (*it).first << endl;
        set<int>::iterator it_in;
        for (it_in = (*it).second.begin(); it_in != (*it).second.end(); it_in++) {
            if(it_in != (*it).second.begin())
                cout << " ";
            cout << *it_in;
        }
        cout << endl;
        it++;
    }

    return 0;
}