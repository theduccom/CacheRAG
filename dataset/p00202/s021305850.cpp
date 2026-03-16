#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<algorithm>
#include<cmath>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define reg(i,a,b) for(int i=(a);i<=(b);i++)
#define irep(i,n) for(int i=((int)(n))-1;i>=0;i--)
#define ireg(i,a,b) for(int i=(b);i>=(a);i--)
typedef long long int lli;
typedef pair<int,int> mp;
#define fir first
#define sec second

bool prime[1000005];
void init(){
	rep(i,1000005){
		prime[i]=true;
	}
	prime[0]=prime[1]=false;
	reg(i,2,1000004){
		if(!prime[i])continue;
		for(int j=i*2;j<1000005;j+=i)prime[j]=false;
	}
}

int cam[1000005];

int main(void){
	init();
	int m,n;
	for(;;){
		scanf("%d%d",&n,&m);
		if(n==0)break;
		int dat[35];
		rep(i,n){
			scanf("%d",&dat[i]);
		}
		memset(cam,0,sizeof(cam));
		cam[0]=1;
		rep(i,n){
			int no=dat[i];
			reg(j,0,m-no){
				if(cam[j]==1)cam[j+no]=1;
			}
		}
		int ans=0;
		reg(i,2,m){
			if(cam[i]==1 && prime[i])ans=i;
		}
		if(ans!=0)printf("%d\n",ans);
		else printf("NA\n");
	}
		
	return 0;
}