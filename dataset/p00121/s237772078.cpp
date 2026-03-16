#include <iostream>
#include <map>
#include <algorithm>
#include <queue>
using namespace std;
typedef pair<string,int> NODE;
int main(){
	NODE now;
	map<string,int> done;
	queue<NODE> Q;
	Q.push(make_pair("01234567",0));
	while(!Q.empty()){
		now = Q.front();Q.pop();
		done[now.first] = now.second;
		
		int x = now.first.find("0");
		if( (x+1)%4 ){
			swap(now.first[x],now.first[x+1]);
			if( done.find(now.first) == done.end() )Q.push(make_pair(now.first,now.second+1));
			swap(now.first[x],now.first[x+1]);
		}
		if( x%4 ){
			swap(now.first[x],now.first[x-1]);
			if( done.find(now.first) == done.end() )Q.push(make_pair(now.first,now.second+1));
			swap(now.first[x],now.first[x-1]);
		}
		if( x<4 ){
			swap(now.first[x],now.first[x+4]);
			if( done.find(now.first) == done.end() )Q.push(make_pair(now.first,now.second+1));
			swap(now.first[x],now.first[x+4]);
		}
		if( x>=4){
			swap(now.first[x],now.first[x-4]);
			if( done.find(now.first) == done.end() )Q.push(make_pair(now.first,now.second+1));
			swap(now.first[x],now.first[x-4]);
		}
	}
	string t,data;
	while(cin >> t){
		data = t;
		for(int i=0;i<7;i++){
			cin >> t;
			data += t;
		}
		cout << done[data] << endl;
	}
}