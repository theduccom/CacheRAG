#include<iostream>
#include<vector>
#include<climits>
using namespace std;

#define NONE INT_MAX>>1

int n,m,a,b,c,d,x1,x2,y1,y2;
vector< vector<int> >M;

int WarshallFloyd(int start,int goal)
{
  vector< vector<int> >A(n,vector<int>(n,NONE));
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      if(M[i][j]!=NONE)A[i][j]=M[i][j];
  for(int k=0;k<n;k++)
    for(int i=0;i<n;i++)
      for(int j=0;j<n;j++)
	A[i][j]=min(A[i][j],A[i][k]+A[k][j]);
  return A[start][goal];
}

int main()
{
  cin>>n>>m;
  M.resize(n);
  for(int i=0;i<n;i++)M[i].resize(n,NONE);
  for(int i=0;i<m;i++){
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    a--;b--;
    M[a][b]=c;
    M[b][a]=d;
  }
  scanf("%d,%d,%d,%d",&x1,&x2,&y1,&y2);
  x1--;x2--;
  cout<<(y1-y2-WarshallFloyd(x1,x2)-WarshallFloyd(x2,x1))<<endl;
}