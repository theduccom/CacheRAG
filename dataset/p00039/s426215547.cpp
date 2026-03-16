#include <iostream>
#include <string>
#include <map>
#define MCI map<char,int>
using namespace std;
int main()
{
  MCI m;
  m.insert(MCI::value_type('I',1));
  m.insert(MCI::value_type('V',5));
  m.insert(MCI::value_type('X',10));
  m.insert(MCI::value_type('L',50));
  m.insert(MCI::value_type('C',100));
  m.insert(MCI::value_type('D',500));
  m.insert(MCI::value_type('M',1000));

  string s;
  while(cin >> s){
    int l = s.length();
    char p = s[0];
    int n=0;
    for(int i=1;i<l;i++){
      char c = s[i];
      if(m[p] < m[c]) n -= m[p];
      else n += m[p];
      p = c;
    }
    n += m[p];
    cout << n << endl;
  }
  return 0;
}