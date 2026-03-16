#include <iostream>
#include <map>
#include <set>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    map<string, set<int> > m;
    string t;
    int n;
    while (cin >> t >> n) m[t].insert(n);
    for(map<string, set<int> >::iterator i = m.begin(); i != m.end(); ++i) {
        cout << i->first << endl;
        ostringstream os;
        for(set<int>::iterator j = i->second.begin(); j != i->second.end(); ++j)
            os << " " << *j;
        cout << os.str().substr(1) << endl;
    }
    return 0;
}