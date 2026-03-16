#include<iostream>
#include<string.h>
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

char str[200]={};

int main()
{
  int i,j;

  while(scanf("%s",str)!=EOF){
    rep(i,strlen(str)){
      if(str[i]=='@'){
	int n=str[i+1]-'0';
	rep(j,n)
	  cout<<str[i+2];
	i+=2;
      }else
	cout<<str[i];
    }
    cout<<endl;
  }
}