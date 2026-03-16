

#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<math.h>
#include<string>
#include<string.h>
#include<stack>
#include<queue>
#include<vector>
#include<utility>
#include<set>
#include<map>
#include<stdlib.h>
#include<iomanip>

using namespace std;

#define ll long long
#define ld long double
#define EPS 0.0000000001
#define INF 1e9
#define MOD 1000000007
#define rep(i,n) for(i=0;i<n;i++)
#define loop(i,a,n) for(i=a;i<n;i++)
#define all(in) in.begin(),in.end()
#define shosu(x) fixed<<setprecision(x)

typedef vector<int> vi;
typedef pair<int,int> pii;

int main(void) {
  int i,j,k;
  string s;
  char ans[6][10]={"the","the.","this","this.","that","that."};
  while(getline(cin,s)){
    int n=0;
    rep(i,s.size())if(s[i]==' ')n++;
    n++;
    vector<string> word(n);
    i=0;
    rep(j,n){
      while(s[i]!=' '&&s[i]!='\0')
	word[j].push_back(s[i]),i++;
      i++;
    }
    rep(k,26){
      bool c=false;
      rep(i,n)rep(j,word[i].size())
	if(word[i][j]=='z')word[i][j]='a';
	else if(word[i][j]<='z' && word[i][j]>='a')
	  word[i][j]=word[i][j]+1;
      rep(i,n)rep(j,6)
	if(word[i]==ans[j]){
	  c=true;
	}
      if(c){
	rep(i,n){
	  if(i)cout<<" ";
	  cout<<word[i];
	}
	cout<<endl;
	break;
      }
    }
  }
}