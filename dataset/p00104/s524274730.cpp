#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
	for(int w,h;cin>>h>>w;){
		if(w==0&&h==0)break;
		vector<string> v;
		set<int> visited;
		for(int i=0;i<h;++i){
			string s;
			cin>>s;
			v.push_back(s);
		}
		for(int x=0,y=0;;){
			if(visited.find(y*w+x)!=visited.end()){
				cout<<"LOOP\n";
				break;
			}
			visited.insert(y*w+x);
			if(v[y][x]=='.'){
				cout<<x<<" "<<y<<"\n";
				break;
			}else if(v[y][x]=='>')++x;
			else if(v[y][x]=='<')--x;
			else if(v[y][x]=='v')++y;
			else if(v[y][x]=='^')--y;
		}
	}
}