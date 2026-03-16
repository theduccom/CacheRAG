#include <algorithm>
#include <map>
#include <vector>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cctype>
using namespace std;

#define REP(i,n) for(int i=0; i<n; ++i)
#define IREP(it,array) for(vector<int>::iterator it=array.begin(); it!=array.end(); ++it)

int main()
{
  cout.setf(ios::fixed, ios::floatfield);
  cout.precision(6);

  map<char, bool> ball;
  ball['A'] = true;
  ball['B'] = false;
  ball['C'] = false;

  char from, to;
  char del;
  while(cin>>from>>del>>to){
    swap(ball[from], ball[to]);
  }

  for(map<char,bool>::iterator it=ball.begin(); it!=ball.end(); ++it){
    if( it->second == true ){
      cout << it->first << endl;
    }
  }

  return 0;
}