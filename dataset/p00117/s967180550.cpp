#include<iostream>
#include<vector>
#include<climits>
using namespace std;

#define NONE INT_MAX>>1

vector< vector<int> > WarshallFloyd(vector< vector<int> >A)
{
  for(int k=0;k<A.size();k++)for(int i=0;i<A.size();i++)for(int j=0;j<A.size();j++)
    A[i][j]=min(A[i][j],A[i][k]+A[k][j]);
  return A;
}

int main()
{
  int n,m,a,b,c,d,x1,x2,y1,y2;
  vector< vector<int> >M;
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
  vector< vector<int> >A=WarshallFloyd(M);
  cout<<(y1-y2-A[x1][x2]-A[x2][x1])<<endl;
}