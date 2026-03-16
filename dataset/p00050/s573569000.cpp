#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <vector>
#include <set>

using namespace std;
typedef long long LL;
static const double EPS = 1e-9;

#define FOR(i,k,n) for (int i=(k); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n) 

int main(void){  
  /*
  string tmp;
  bool first=true;
  while(cin>>tmp){
    if(!first) cout << " ";
    if(tmp=="apple")
      cout << "peach";
    else if (tmp=="peach") 
      cout << "apple";
    else 
      cout << tmp;
    first = false;
  }
  cout << endl;
  */
  string line;
  getline(cin,line);
  string tmp1 = line;
  string tmp2 = line;
  string out = line;
  while(tmp1.find("apple")!=string::npos){
    out.replace(tmp1.find("apple"),5,"peach");
    tmp1.replace(tmp1.find("apple"),5,"peach");
  }
  while(tmp2.find("peach")!=string::npos){
    out.replace(tmp2.find("peach"),5,"apple");
    tmp2.replace(tmp2.find("peach"),5,"apple");
  }
  cout<<out<<endl;
  return 0;
}