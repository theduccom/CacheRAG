#include<iostream>
#include<algorithm>
#include<functional>

using namespace std;

int main(){
	int n,m;
	int yasai[1000];
	int zenbu=0;
	int c=0;
	while(true){
		cin>>n>>m;
		if(n==0&&m==0)break;
		for(int i=0;i<n;i++){
			cin>>yasai[i];
		}
		sort(yasai,yasai+n,greater<int>());
		for(int i=0;i<n;i++){
			if(c==m-1)c=0;
			else {
				zenbu+=yasai[i];
				c++;
			}
		}
		cout<<zenbu<<endl;
		zenbu=0;
		c=0;
		for(int i=0;i<n;i++)yasai[i]=0;
	}
	return 0;
}