#include <iostream>
#include <vector>
using namespace std;

#define rep(i,n) for(int i=0;i<n;++i)
#define mkp make_pair
#define F first
#define S second
int main(){
	int h,w;
	while(cin>>h>>w,h||w){
		vector<vector<int> > vv(h,vector<int>(w));
		// cout<<vv.size()<<" "<<vv[0].size()<<endl;
		pair<int,int> pos=mkp(0,0);
		vector<string> vs(h);
		rep(i,h){
			rep(j,w){
				vv[i][j]=1;
			}
		}
		rep(i,h) cin>>vs[i];
		bool flag=true;
		while(vv[pos.F][pos.S]){
			// cout<<vs[pos.F][pos.S]<<endl;
			vv[pos.F][pos.S]=0;
			int x=pos.F,y=pos.S;
			if(vs[x][y]=='.'){
				cout<<y<<" "<<x<<endl;
				flag=false;
				break;
			}
			if(vs[x][y]=='<') pos.S--;
			else if(vs[x][y]=='>') pos.S++;
			else if(vs[x][y]=='^') pos.F--;
			else pos.F++;
		}
		if(flag) cout<<"LOOP\n";
	}
	return 0;
}