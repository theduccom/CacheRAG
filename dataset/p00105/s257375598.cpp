#include <iostream>
#include <string>
#include <map>
#include <set>
using namespace std;

int main(){
  string phrase;
  int page;
  map<string, set<int> > dictionary;

  while(cin >> phrase >> page){
    //cin >> phrase >> page;
    // if(phrase == "end") break;
    dictionary[phrase].insert(page);
  }

  map<string, set<int> >::iterator p1;
  set<int>::iterator p2;

  for(p1 = dictionary.begin(); p1 != dictionary.end(); p1++){
    cout << (*p1).first << endl;

    p2 = dictionary[(*p1).first].begin();
    cout << *p2;
    for( p2++; p2 != dictionary[(*p1).first].end(); p2++){
      cout << " " << *p2;
    }
    cout << endl;

  } 

  return 0;
}