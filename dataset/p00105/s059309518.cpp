#include <iostream>
#include <string>
#include <map>
#include <set>
using namespace std;
int main()
{
  multimap< string, int > m;
  string str;
  int n;
  while(cin >> str >> n){
    m.insert( map<string,int>::value_type(str,n) );
  }
  map<string,int>::iterator it = m.begin();
  while(it != m.end()){
    cout << (*it).first << endl;
    n = m.count((*it).first);
    set<int> s;
    while(n--){
      s.insert((*it).second);
      it++;
    }
    set<int>::iterator i = s.begin();
    cout << *i;
    i++;
    while(i != s.end()){
      cout << " " << *i;
      i++;
    }
    cout << endl;
  }
  return 0;
}