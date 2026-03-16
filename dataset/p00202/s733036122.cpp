#include<iostream>
#include<algorithm>
#define rep(i,n) for(int i=0;i<n;i++)
#define MP 1000001
using namespace std;
bool p[MP],a[MP];
int main(){
	for(int i=2;i*i<MP;i++)if(!p[i])for(int j=i+i;j<MP;j+=i)p[j]=1;p[0]=p[1]=1;
	int c[30],n,x,ans;
	while(cin>>n>>x,n){
		fill(a,a+x+1,0);
		rep(i,n)cin>>c[i];
		ans=0,a[0]=1;
		rep(i,x+1)rep(j,n)if(i>=c[j]&&a[i-c[j]]){
			a[i]=1; if(!p[i])ans=i;
		}
		if(ans)cout<<ans<<endl;
		else cout<<"NA"<<endl;
	}
	return 0;
}