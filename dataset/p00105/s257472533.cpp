#include<iostream>
#include<map>
#include<set>

using namespace std;

int main(void){
  map<string, set<int> > m;
  map<string, set<int> >::iterator it;
  set<int>::iterator itr;
  string s;
  int n;

  while(cin>>s>>n){
    m[s].insert(n);
  }
  for(it=m.begin();it!=m.end();it++){
    cout <<(*it).first<<endl;
    for(itr=(*it).second.begin();itr!=(*it).second.end();itr++){
      cout<< *itr;
      itr++;
      if(itr!=(*it).second.end()){
	cout<<" ";
      }
      itr--;
    }
    cout <<endl;
  }
  
}