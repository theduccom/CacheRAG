#include<bits/stdc++.h>
using namespace std;
const int N=101;
string G[N];
bitset<N> vis[N];
int n,m;
signed main(void){
	ios::sync_with_stdio(false);
	while(cin>>n>>m&&n&&m){
		//getchar();
		for(int i=0;i<n;i++)
				cin>>G[i];
		int x=0,y=0;
		for(int i=0;i<n;i++)
			vis[i].reset();
		while(true){
			if(vis[x][y]){
				cout<<"LOOP"<<endl;	
				break;
			}
			else if(G[x][y]=='.'){
				cout<<y<<" "<<x<<endl;
				break;	
			}
			vis[x][y]=true;
			switch(G[x][y]){
				case('>'):y++;break;
				case('<'):y--;break;
				case('^'):x--;break;
				case('v'):x++;break;
			}
		}
	}
}