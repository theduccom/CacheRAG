#include<iostream>
#include<algorithm>
using namespace std;
int a[1000],n,m,ans;
int main(){
	while(true){cin>>n>>m;if(n==0&&m==0)break;ans=0;for(int i=0;i<n;i++){cin>>a[i],ans+=a[i];}sort(a,a+n);for(int i=n%m;i<n;i+=m)ans-=a[i];cout<<ans<<endl;}
	return 0;
}