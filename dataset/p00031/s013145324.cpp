#include<bits/stdc++.h>
using namespace std;
int w,ans[10],wei[10];
signed main(void){
		ios::sync_with_stdio(false);
		for(int i=0;i<10;i++)
			wei[i]=1<<i;
		while(cin>>w){
			memset(ans,0,sizeof(ans));
			for(int i=9;i>=0;i--)
				if(w>=wei[i]){
					ans[i]=1;
					w-=wei[i];
				}
			for(int i=0,j=0;i<10;i++)
				if(ans[i]){
					if(j!=0)
						cout<<" ";
					else
						j=1;
					cout<<wei[i];	
				}
			cout<<endl;
		}
}