#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>
#include<utility>
#define ll long long int
#define ld long double
#define INF 1000000000
#define EPS 0.0000000001
#define rep(i,n) for(i=0;i<n;i++)
using namespace std;
typedef pair<int, int> P;

string str;

int main()
{
  int a=0,b=0,ab=0,o=0;
  int n;

  while(scanf("%d",&n)!=EOF){
    cin>>str;
    if(str[1]=='A'){
      if(str[2]=='B')
	ab++;
      else
	a++;
    }
    else if(str[1]=='B')
      b++;
    else
      o++;  
  }
  cout<<a<<endl;
  cout<<b<<endl;
  cout<<ab<<endl;
  cout<<o<<endl;
}