#include<bits/stdc++.h>
using namespace std;

int main() {

  map<string, vector<int> > m;
  string s;
  string data_s[101];
  int page;
  while( cin >> s >> page ) {
    m[s].push_back(page);
  }

  for( map<string, vector<int> >::iterator it = m.begin(); it != m.end(); it++) {
    cout << (*it).first << endl;
    sort((*it).second.begin(), (*it).second.end());
    for(int i=0; i<(*it).second.size()-1; i++) {
      cout << (*it).second[i] << " ";
    }
    cout << (*it).second[(*it).second.size()-1] << endl;
  }

}