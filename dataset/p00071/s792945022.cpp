#include <iostream>
#include <algorithm>
#include <map>
#include <stack>
using namespace std;
int main(){
	int n,x,y;
	cin>>n;
	for(int i=0;i<n;++i){
		string blocks[8];
		stack <pair<int,int> > st;
		for(int j=0;j<8;++j) cin>>blocks[j];
		cin>>x>>y;
		st.push(make_pair(x-1,y-1));
		cout<<"Data "<<(i+1)<<":\n";
		for(;!st.empty();){
			int x=(st.top()).first,y=(st.top()).second;
			st.pop();
			for(int j=x-3;j<x+4&&j<8;++j){
				if(j<0)continue;
				if(blocks[y][j]=='1'){
					blocks[y][j]='0';
					st.push(make_pair(j,y));
				}
			}
			for(int j=y-3;j<y+4&&j<8;++j){
				if(j<0)continue;
				if(blocks[j][x]=='1'){
					blocks[j][x]='0';
					st.push(make_pair(x,j));
				}
			}
		}
		for(int j=0;j<8;++j)cout<<blocks[j]<<"\n";
	}
	return 0;
}