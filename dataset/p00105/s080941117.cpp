#include <bits/stdc++.h>
using namespace std;

typedef long int lint;
typedef long long int llint;
#define rep(i, f, n) for (int (i) = (f); i < (n); i++)

int main()
{
  string word;
  int page;
  map<string, vector<int> > index;

  while (cin >> word >> page){
    index[word].push_back(page);
  }

  for (map<string, vector<int> >::iterator it = index.begin(); it != index.end(); ++it){
    cout << it->first << endl;
    vector<int>& pages = it->second;
    sort(pages.begin(), pages.end());
    for (int i = 0; i < pages.size(); i++){
      if (i != 0){
        cout << ' ';
      }
      cout << pages[i];
    }
    cout << endl;
  }
}