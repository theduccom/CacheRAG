#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
  map<string, vector<int> > dic;
  vector<string> bin;
  string input;
  int n;

  while (cin >> input >> n){
    if (dic.find(input) == dic.end()){
      bin.push_back(input);
    }
    dic[input].push_back(n);
  }

  sort(bin.begin(), bin.end());
  for (int i = 0; i < bin.size(); i++){
    sort(dic[bin[i]].begin(), dic[bin[i]].end());
    cout << bin[i] << '\n';
    for (int j = 0; j < dic[bin[i]].size() - 1; j++){
      cout << dic[bin[i]][j] << " ";
    }
    cout << dic[bin[i]][dic[bin[i]].size() - 1] << '\n';
  }

  return (0);
}