#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main() {
  map<string, vector<int> > M;
  string in;
  int page;
  while(cin>>in>>page) {
    if(M.find(in) == M.end())
      M[in] = vector<int>(1, page);
    else
      M[in].push_back(page);
  }

  map<string, vector<int> >::iterator it = M.begin();
  while(it != M.end()) {
    cout<<(*it).first<<endl;
    sort((*it).second.begin(), (*it).second.end());
    for(int i=0; i<(*it).second.size()-1; ++i)
      cout<<(*it).second[i]<<" ";
    cout<<(*it).second[(*it).second.size()-1]<<endl;
    it++;
  }
}