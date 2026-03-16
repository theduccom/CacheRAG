#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <functional>

using namespace std;

#define rep(i,n) for((i)=0;(i)<(int)(n);(i)++)
#define foreach(itr,c) for(__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)

int romanNumberToInt(string s){
  int n = s.size(), i, res = 0;

  rep(i,n){
    if(i < n-1 && s[i] == 'C' && s[i+1] == 'M'){ res += 900; i++; continue;}
    if(i < n-1 && s[i] == 'C' && s[i+1] == 'D'){ res += 400; i++; continue;}
    if(i < n-1 && s[i] == 'X' && s[i+1] == 'C'){ res += 90; i++; continue;}
    if(i < n-1 && s[i] == 'X' && s[i+1] == 'L'){ res += 40; i++; continue;}
    if(i < n-1 && s[i] == 'I' && s[i+1] == 'X'){ res += 9; i++; continue;}
    if(i < n-1 && s[i] == 'I' && s[i+1] == 'V'){ res += 4; i++; continue;}
    if(s[i] == 'M') res += 1000;
    else if(s[i] == 'D') res += 500;
    else if(s[i] == 'C') res += 100;
    else if(s[i] == 'L') res += 50;
    else if(s[i] == 'X') res += 10;
    else if(s[i] == 'V') res += 5;
    else if(s[i] == 'I') res++;
  }

  return res;
}

int main(){
  string in;

  while(cin >> in){
    printf("%d\n",romanNumberToInt(in));
  }

  return 0;
}