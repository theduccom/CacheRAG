#include<iostream>
#include<algorithm>
#include<functional>
#include<numeric>
using namespace std;


int main(){
	int n,m;
	int p[1000];
	while(cin>>n>>m,n|m){
		for(int i=0;i<n;i++)cin>>p[i];
		sort(p,p+n,greater<int>());
		int s=accumulate( p,p+n, 0 );
		for(int i=m-1;i<n;i+=m){
			s-=p[i];
		}
		cout<<s<<endl;
	}
	return 0;
}