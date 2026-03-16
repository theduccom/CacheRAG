#include<iostream>
#include<sstream>
#include<algorithm>
#include<numeric>
#include<vector>
#include<map>
#include<set>
#include<queue>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<cassert>

#define rep(i,n) for(int i=0;i<n;i++)
#define all(c) (c).begin(),(c).end()
#define fr(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)
#define mp make_pair
#define pb push_back
#define dbg(x) cerr<<#x<<" = "<<(x)<<endl

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

const int inf=1<<28;
const double INF=1e12,EPS=1e-9;

string in; int n;

int eval(int s,int t){
  int i,d=0;
  for(i=t-1;i>=s;i--){
    if(in[i]==')')d++;
    else if(in[i]=='(')d--;
    if(d==0&&(in[i]=='+'||in[i]=='-'))break;
  }
  if(i>=s){
    int a=eval(s,i),b=eval(i+1,t);
    return in[i]=='+'?a+b:a-b;
  }
  d=0;
  for(i=t-1;i>=s;i--){
    if(in[i]==')')d++;
    else if(in[i]=='(')d--;
    if(d==0&&(in[i]=='*'||in[i]=='/'))break;
  }
  if(i>=s){
    int a=eval(s,i),b=eval(i+1,t);
    return in[i]=='*'?a*b:a/b;
  }
  if(in[s]=='('&&in[t-1]==')')return eval(s+1,t-1);
  return atoi(in.substr(s,t-s).c_str());
}
int main()
{
  int cs; cin>>cs; cin.ignore();
  rep(i,cs){
    getline(cin,in);
    n=in.size();
    cout<<eval(0,n-1)<<endl;
  }
  return 0;
}