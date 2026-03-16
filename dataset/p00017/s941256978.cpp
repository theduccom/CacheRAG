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
void decode(vector<string> &words)
{
  int s=0;
  REP(i,words.size()){
    REP(j,26){
      REP(k,words[i].size()){
        if(words[i][k] >= 'a' && words[i][k] <= 'z' )
        words[i].replace(k, 1, 1,
              'a' + ( words[i][k] + 1 - 'a')%26 );
        
        if(words[i] == "the"||words[i] == "this" || words[i] == "that" )
          s = j;
      }
    }
  }
  REP(i,words.size())
    REP(j,words[i].size())
      if(words[i][j] >= 'a' && words[i][j] <= 'z' )
        words[i].replace(j, 1, 1, 'a' + (words[i][j] + s+1 - 'a')%26 );
}

int main(void){  
  vector<string> words;
  string bf;

  while(true){
    if(!(cin >> bf)) break;
    words.push_back(bf);
    int c = getchar();
    if(c=='\n'){
      decode(words);
      cout << words[0];
      FOR(i,1,words.size())
        cout << " " << words[i];
      cout << endl;
      words.clear();
    }
  }
  return 0;
}