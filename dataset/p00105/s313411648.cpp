#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct BooKIndex{
  vector<int> page;
  string word;
  BooKIndex(const int &p,const string &w){
    word=w;
    page.push_back(p);
  }
  bool operator==(const BooKIndex &b)const{
    return word==b.word;
  }
  bool operator<(const BooKIndex &b)const{
    return word<b.word;
  }
};

int main(){
  vector<BooKIndex> indexlist;
  string word;
  int page;
  while(cin>>word>>page){
    auto idx=find(indexlist.begin(),indexlist.end(),BooKIndex(page,word));
    if(idx!=indexlist.cend())
      idx->page.push_back(page);
    else
      indexlist.push_back(BooKIndex(page,word));
  }
  for(auto &l:indexlist){
    sort(l.page.begin(),l.page.end());
  }
  sort(indexlist.begin(),indexlist.end());
  for(auto l:indexlist){
    cout<<l.word<<endl;
    for(int i=0;i<l.page.size();i++)
      cout<<l.page[i]<<((i!=l.page.size()-1)?' ':'\n');
  }

}