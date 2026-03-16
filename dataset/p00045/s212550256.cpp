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
  int price,num;
  int n=0;
  int sum=0;
  double ave;

  while(scanf("%d,%d",&price,&num)!=EOF){
    n++;
    sum+=price*num;
    ave+=num;
  }
  ave=ave*1.0/n+0.5;
  cout<<sum<<endl;
  cout<<(int)ave<<endl;
}