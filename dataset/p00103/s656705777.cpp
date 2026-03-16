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

string str;

int main()
{
  int n,i,j,k;
  cin>>n;
  rep(i,n){
    int out=0;
    int score=0;
    bool first=false;
    bool second=false;
    bool third=false;

    while(1){
      cin>>str;
      if(str=="OUT"){
	out++;
	if(out==3)break;
      }
      if(str=="HIT"){
	if(first){
	  if(second){
	    if(third)
	      score++;
	    else
	      third=true;
	  }
	  else
	    second=true;
	}
	else
	  first=true;
      }
      if(str=="HOMERUN"){
	score++;
	if(first){
	  first=false;
	  score++;
	}
	if(second){
	  second=false;
	  score++;
	}
	if(third){
	  third=false;
	  score++;
	}
      }
    }	

    cout<<score<<endl;
  }
}