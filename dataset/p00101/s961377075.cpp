#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<string>

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define ALL(c) (c).begin(), (c).end()
#define mp make_pair
#define f first
#define s second

using namespace std;

typedef long long ll;

int main(){
  string str;
  int n;
  getline(cin, str); sscanf(str.c_str(),"%d",&n);
  while(n --> 0){
    int pos;
    getline(cin, str);
    while((pos = str.find("Hoshino")) != string::npos){
      str[pos+6] = 'a';
    }
    cout << str << endl;
  }
  return 0;
}