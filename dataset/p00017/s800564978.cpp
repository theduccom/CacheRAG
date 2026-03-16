#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<cstdio>
#include<climits>
#include<cmath>
#include<cstring>
#include<string>
#include<sstream>

#define f first
#define s second
#define mp make_pair

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define ALL(c) (c).begin(), (c).end()

using namespace std;

typedef unsigned int uint;
typedef long long ll;

struct inc{
  void operator() (char &c){
    if(isalpha(c)){
      if(islower(c))
	c = (((c - 'a') + 1) % ('z'-'a'+1)) + 'a';
      else
	c = (((c - 'A') + 1) % ('Z'-'A'+1)) + 'A';
    }
  }
};

int main(){
  string str;
  while(getline(cin, str)){
    bool f = true;
    while(f){
      for_each(str.begin(), str.end(), inc());
      stringstream ss(str);
      string tmp;
      while(ss>>tmp)
	if(tmp == "the" || tmp == "this" || tmp == "that" ||
	   tmp == "THE" || tmp == "THIS" || tmp == "THAT"){
	  cout << str << endl;
	  f = false;
	  break;
      }
    }
  }
  return 0;
}