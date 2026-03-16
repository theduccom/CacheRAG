#include<iostream>
using namespace std;

int main(){
  int i,j;
  int n,m;
  int a,b,c,d;
  int x1,x2,y1,y2;
  int ans;
  int rout[21][21];
  int dis1[21],dis2[21];
  int flag;

  while(scanf("%d",&n)!=EOF){
    cin >> m;

    for(i=1;i<=n;i++){
      for(j=1;j<=n;j++){
	rout[i][j] = -1;
      }
    }

    for(i=0;i<m;i++){
      scanf("%d,%d,%d,%d ",&a,&b,&c,&d);
      rout[a][b] = c;
      rout[b][a] = d;
    }
    scanf("%d,%d,%d,%d ",&x1,&x2,&y1,&y2);

    for(i=1;i<=n;i++)dis1[i] = -1;
    for(i=1;i<=n;i++)dis2[i] = -1;
    dis1[x1] = 0;
    dis2[x2] = 0;

    while(1){
      flag = 0;

      for(i=1;i<=n;i++){
	if(dis1[i]>=0){
	  for(j=1;j<=n;j++){
	    if(rout[i][j]>=0){
	      if(dis1[j]<0){
		dis1[j] = dis1[i] + rout[i][j];
		flag = 1;
	      }else if(dis1[i]+rout[i][j] < dis1[j]){
		dis1[j] = dis1[i]+rout[i][j];
		flag = 1;
	      }
	    }
	  }
	}
	if(dis2[i]>=0){
	  for(j=1;j<=n;j++){
	    if(rout[i][j]>=0){
	      if(dis2[j]<0){
		dis2[j] = dis2[i] + rout[i][j];
		flag = 1;
	      }else if(dis2[i]+rout[i][j] < dis2[j]){
		dis2[j] = dis2[i]+rout[i][j];
		flag = 1;
	      }
	    }
	  }
	}
      }
      if(!flag)break;
    }
  
    ans = y1 - y2 -dis1[x2] - dis2[x1];
    cout << ans << endl;
  }
}