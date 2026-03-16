#include<iostream>
#include<map>
#include<set>
#include<string>
using namespace std;
#define mp make_pair

int main(){
  map<string, set<int> > index;
  string name;
  int num;
  while(cin>>name>>num){
    index[name].insert(num);
  }
  map<string, set<int> >::iterator it = index.begin();
  while(it != index.end()){
    cout<<(*it).first<<endl;
    set<int>::iterator it0 = (*it).second.begin();
    while(true){
      cout<<*it0;
      it0++;
      if(it0 != (*it).second.end()){
	cout<<" ";
      }
      else
	break;
    }
    cout<<endl;
    it++;
  }
  return 0;
}