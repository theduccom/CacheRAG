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

  map<string,int> nums;

  int a;
  char del;
  string blood;
  while(cin>>a>>del>>blood){
    nums[blood]++;
  }

  cout << nums["A"] << endl;
  cout << nums["B"] << endl;
  cout << nums["AB"] << endl;
  cout << nums["O"] << endl;
  return 0;
}