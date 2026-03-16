#include <iostream>
#include <map>
#include <algorithm>
#include <queue>
using namespace std;
typedef pair<string,int> NODE;

int di[] = {1,-1,4,-4};

bool check(int n){return n<8 && n>=0;}

int main(){
	NODE now;
	map<string,int> done;
	queue<NODE> Q;
	Q.push(make_pair("01234567",0));
	while(!Q.empty()){
		now = Q.front();Q.pop();
		done[now.first] = now.second;		
		int x = now.first.find("0");
		for(int i=0;i<4;i++){
			if((x)  %4 == 0 && i == 1)continue;
			if(!((x+1)%4||i))continue;
			if( !check(x+di[i]) )continue;
			swap(now.first[x],now.first[x+di[i]]);
			if( done.find(now.first) == done.end() )Q.push(make_pair(now.first,now.second+1));
			swap(now.first[x],now.first[x+di[i]]);
		}
	}
	string t;
	while(getline(cin,t)){
		t.erase(remove(t.begin(),t.end(),' '),t.end());
		cout << done[t] << endl;
	}
}