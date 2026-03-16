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

  while(1){
    cin>>n;
    if(n==0)break;
    int matrix[15][15]={};

    rep(i,n){
      int sum=0;
      rep(j,n){
	scanf("%d",&matrix[i][j]);
	sum+=matrix[i][j];
      }
      matrix[i][j]=sum;
    }
    rep(j,n+1){
      int sum=0;
      rep(i,n)
	sum+=matrix[i][j];
      matrix[i][j]=sum;
    }

    rep(i,n+1){
      rep(j,n+1)
	printf("%5d",matrix[i][j]);
      puts("");
    }
  }
}