#include<iostream>
#include<string>
#include<cstdlib>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
  int n;
  string s;
  cin>>n;
  for(int i=0; i<n; i++) {
    cin>>s;
    vector<char> v;
    for(int j=0; j<s.length(); j++)
      v.push_back(s[j]);
    sort(v.begin(), v.end());
    string min,max;
    for(int j=0; j<v.size(); j++) {
      min += string(1,v[j]);
      max += string(1,v[v.size()-j-1]);
    }
    int ma=atoi(max.c_str()),mi=atoi(min.c_str());
    cout<<ma-mi<<endl;
  }
}