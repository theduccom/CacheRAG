#include <iostream>   
#include <string>   
#include <set>   
#include <map>   
using namespace std;   
  
int main()   
{   
    int n;   
    string str;   
    map<string, set<int> > m;   
    map<string, set<int> >::iterator p;   
  
    while (cin >> str>> n)   
        m[str].insert(n);   
  
    for (p = m.begin(); p != m.end(); p++)   
    {   
        cout << p->first << endl;   
        set<int>::iterator q = (p->second).begin();   
        for (; q != (p->second).end(); )   
        {   
            cout << *q;   
            cout << (++q != (p->second).end() ? ' ' : '\n');   
        }   
    }   
  
    return 0;   
}  