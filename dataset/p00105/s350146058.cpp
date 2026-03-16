#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

map<string, vector<int> > book_index;

int main(void){
  string name;
  int page;
  while(cin >> name >> page){
    book_index[name].push_back(page);
  }

  for(auto word : book_index){
    cout << word.first << endl;
    sort(word.second.begin(), word.second.end());
    for(int i = 0; i < word.second.size(); i++){
      cout << word.second[i];
      if(i < word.second.size() - 1) cout << " ";
    }
    cout << endl;
  }
  return 0;
}