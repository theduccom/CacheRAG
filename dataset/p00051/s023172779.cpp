#include <algorithm>
#include <map>
#include <vector>
#include <iostream>
#include <sstream>
#include <cstdio>
#include <cstring>
#include <cctype>
#include <cmath>
using namespace std;

#define REP(i,n) for(int i=0; i<n; ++i)
#define IREP(it,array) for(vector<int>::iterator it=array.begin(); it!=array.end(); ++it)

int toNum(int nums[], int n)
{
  int res=0;
  for(int i=0; i<n; i++){
    res+= nums[n-i-1] * pow(10.0,i);
  }
  return res;
}

int main()
{
  cout.setf(ios::fixed, ios::floatfield);
  cout.precision(6);

  int n;
  string str;

  cin >> n;
  REP(i,n){
    cin >> str;
    int nums[str.size()];
    REP(j,str.size()){
      nums[j] = str[j]-'0';
    }
    sort(nums, nums+str.size());
    int min=toNum(nums, str.size());
    sort(nums, nums+str.size(), greater<int>() );
    int max=toNum(nums, str.size());

    cout << max - min << endl;
  }

  return 0;
}