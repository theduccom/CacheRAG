#include <cstdio>
#include <cstring>
#include <stack>
using namespace std;
#define PI pair<int,int>
char m[14][14];
int main()
{
  int n,i,j,k,x,y;
  scanf("%d",&n);
  for(k=1;k<=n;k++){
    scanf("\n");
    memset(m,0,sizeof(m));
    for(i=3;i<11;i++){
      scanf("%s",&m[i][3]);
    }
    scanf("%d%d",&x,&y);
    stack< PI > st;
    m[y+2][x+2] = '0';
    st.push(PI(x+2,y+2));
    while(!st.empty()){
      PI p = st.top();
      st.pop();
      for(i=-3;i<=3;i++){
	if(m[p.second+i][p.first] == '1'){
	  m[p.second+i][p.first] = '0';
	  st.push(PI(p.first,p.second+i));
	}
	if(m[p.second][p.first+i] == '1'){
	  m[p.second][p.first+i] = '0';
	  st.push(PI(p.first+i,p.second));
	}
      }
    }
    printf("Data %d:\n",k);
    for(i=3;i<11;i++){
      for(j=3;j<11;j++){
	printf("%c",m[i][j]);
      }
      printf("\n");
    }
  }
  return 0;
}