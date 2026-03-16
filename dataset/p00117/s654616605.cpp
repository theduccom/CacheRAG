#include <cstdio>
#include <cstring>
#define M(a,b) (a<b?a:b)
#define F(i,n) for(int i=0;i<n;i++)
int n,m,a,b,c,d,e[20][20];int main(){memset(e,31,1600);scanf("%d%d",&n,&m);F(i,m){scanf("%d,%d,%d,%d",&a,&b,&c,&d);a--;b--;e[a][b]=c;e[b][a]=d;}scanf("%d,%d,%d,%d",&a,&b,&c,&d);a--;b--;F(k,n)F(i,n)F(j,n) e[i][j] = M(e[i][j],e[i][k]+e[k][j]);printf("%d\n",c-d-e[a][b]-e[b][a]);return 0;}