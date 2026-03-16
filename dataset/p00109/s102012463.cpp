#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <bitset>
#include <map>
#include <unordered_map>
#include <list>
#include <numeric>
#include <utility>
#include <iterator>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <ctime>
#include <cassert>

#define INF 1000000000
#define LINF 9000000000000000000
#define mod 1000000007

#define rep(i,n) for(int i=0;i<int(n);i++)
#define rrep(i,n) for(int i=n-1;i>=0;i--)
#define REP(i,a,b) for(int i=(a);i<int(b);i++)
#define all(x) (x).begin(),x.end()
#define pb push_back
#define mp make_pair

using namespace std;

typedef string::const_iterator State;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long>vll;
typedef pair<int,int> pi;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int ddx[8]={-1,-1,0,1,1,1,0,-1};
int ddy[8]={0,1,1,1,0,-1,-1,-1};
bool debug=false;

/*---------------------------------------------------*/

int number(State &begin);
int expression(State &begin);
int factor(State &begin);
int term(State &begin);

int main(){
  int n;
  string s;
  cin>>n;
  rep(i,n){
    cin>>s;
    State begin=s.begin();
    
    int ans=expression(begin);
    cout<<ans<<endl;
  }
  return 0;
}

int number(State &begin){
  int ret=0;
  while(isdigit(*begin)){
    ret*=10;
    ret+=(*begin-'0');
    begin++;
  }
  return ret;
}

int expression(State &begin){
  int ret=term(begin);
  while(1){
    if(*begin=='+'){
      begin++;
      ret+=term(begin); 
    }else if(*begin=='-'){
      begin++;
      ret-=term(begin);
    }else{
      break;
    }
  }
  return ret;
}


int factor(State &begin){
  int ret=0;
  if(*begin == '('){
    begin++;
    ret=expression(begin);
    begin++;
  }else{
    return number(begin);
  }
  return ret;
}


int term(State &begin){
  int ret=factor(begin);
  while(1){
    if(*begin=='*'){
      begin++;
      ret*=factor(begin); 
    }else if(*begin=='/'){
      begin++;
      ret/=factor(begin);
    }else{
      break;
    }
  }
  return ret;
}

