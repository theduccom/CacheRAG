#include <iostream>
#include <map>
#include <set>
#include <string>
using namespace std;

int main(){
  string a;
  int b;
  map<string,set<int> > kok;
  map<string,set<int> >::iterator it;
  while(cin >> a >> b){
    it = kok.find(a);
    if(it != kok.end())
      it->second.insert(b);
    else{
      set<int> p;
      p.insert(b);
      kok[a] = p;
    }
  }
  for(it=kok.begin(); it!=kok.end(); ++it){
    cout << it->first << endl;
    set<int>::iterator i;
    int u = 0;
    for(i=it->second.begin(); i!=it->second.end(); ++i){
      cout << *i;
      if(u != it->second.size()-1)
	cout << " ";
      u++;
    }
    cout << endl;
  }

  return 0;
}