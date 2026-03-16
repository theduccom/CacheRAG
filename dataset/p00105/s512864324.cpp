#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

class set{
public:
  set(string w){word = w;}
  
  string word;
  vector<int> page;
};


int find(vector<set> a , string key){
  for(int i=0; i<a.size(); i++)if(a[i].word == key)return i;
  return -1;
}
bool comp(const set& a, const set& b){
  return a.word < b.word;
}

int main(){
  
  vector<set> ls;
  string w;
  int p;

  
  while(cin>>w>>p){
    int indx;
    if( (indx=find(ls,w)) == -1){
      set tmp(w);tmp.page.push_back(p);ls.push_back(tmp);
    }
    else{
      ls[indx].page.push_back(p);
    }
  }

  sort(ls.begin() , ls.end() , comp);

  for(int i=0; i<ls.size(); i++){
    sort(ls[i].page.begin() , ls[i].page.end());

    cout << ls[i].word << endl << ls[i].page[0];
    for(int j=1; j<ls[i].page.size(); j++)cout << ' ' << ls[i].page[j];
    cout << endl;
  }
  
  return 0;
}