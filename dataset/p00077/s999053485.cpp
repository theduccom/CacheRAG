#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>

using namespace std;

int main(){
  string s;
  string out = "";
  int n;
  while(cin >> s)
  {
    out = "";
    for(int i = 0; i < s.length(); i++)
    {
      if(s[i] == '@')
      {
       	i++;
        n = s[i] - '0';
        i++;
        for(int j = 0; j < n; j++)
        {
          out += s[i];
        }
      }
      else
      {
       	out += s[i];
      }
    }
    cout << out << endl;
  }
  return 0;
}