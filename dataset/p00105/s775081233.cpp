#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
  multimap<string,int> Index;
  string s;
  int val;
  vector<int> thisisit;
  while(cin  >> s >> val){
    Index.insert(multimap<string,int>::value_type(s,val));
  }
 


  multimap<string,int>::iterator it = Index.begin();
  while(it != Index.end()){
    cout << it->first << endl;
    thisisit.clear();
    int fin = Index.count(it->first);
    for(int i=0;i<fin;i++,it++){
      thisisit.push_back(it->second);
    }
    partial_sort(thisisit.begin(),thisisit.begin()+fin,thisisit.end());
    for(int i=0;i<fin;i++){
      cout << thisisit[i];
      if(i != fin-1)cout << " "; 
    } 
   cout << endl;

  }





  return 0;
}