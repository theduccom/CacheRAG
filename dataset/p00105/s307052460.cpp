#include <iostream>
#include <queue>
#include <map>
#include <algorithm>
using namespace std;
int main(){
  string word;
  int num;
  map<string,vector<int> > index;
  while(cin >> word >> num){
    index[word].push_back( num );
  }

  for(map< string,vector<int> > ::iterator it = index.begin(); it != index.end() ; it++){
    vector<int>ve;
    ve = it->second;
    sort(ve.begin(),ve.end());
    cout << it->first << endl;
    for(vector<int>::iterator itt = ve.begin() ; itt != ve.end() ; itt++){
      if(ve.begin() == itt)cout << *itt;
      else  cout <<" "<< *itt;
    }
    cout << endl;
  }
  return 0;
}