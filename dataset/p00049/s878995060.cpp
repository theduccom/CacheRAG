#include <bits/stdc++.h>
using namespace std;

int main()
{
  map<string, int> Blood;
  string input;
  char c;
  int n;

  while (cin >> n >> c >> input){
    Blood[input]++;
  }

  cout << Blood["A"] << '\n' << Blood["B"] << '\n';
  cout << Blood["AB"] << '\n' << Blood["O"] << '\n';

  return (0);
}