#include<iostream>
#include<queue>
#include<map>
#include<set>
#include<string>
using namespace std;

typedef pair<string,int> P;
string data;
int dx[]={4,1,-4,-1};
set<string> s;
map<string,int> cost;

void bfs(){
	string str="01234567";
	cost[str]=0;
	queue<P> que;
	que.push(P(str,0));
	s.insert(str);
	while(!que.empty()){
		P tmp=que.front();que.pop();
		
		int n_0;
		for(int i=0;i<8;i++)if(tmp.first[i]=='0')n_0=i;
		for(int i=0;i<4;i++){
			if((n_0+dx[i])<8 && (n_0+dx[i])>=0){
				if(n_0==3){
					if(dx[i]==1)continue;
				}
				if(n_0==4){
					if(dx[i]==-1)continue;
				}
				P t=tmp;
				t.second++;
				swap(t.first[n_0],t.first[n_0+dx[i]]);
				if(s.find(t.first)==s.end()){
					que.push(t);
					s.insert(t.first);
					cost[t.first]=t.second;
				}
			}
		}
	}
}
bool input(){
	data.clear();
	for(int i=0;i<8;i++){
		string str;
		if(!(cin>>str))return false;
		data+=str;
	}
	return true;
}


bool check(string str){
	return str=="01234567";
}
int main(){
	bfs();
	while(input()){
		cout<<cost[data]<<endl;
	}
}