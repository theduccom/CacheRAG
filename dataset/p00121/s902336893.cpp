#include<iostream>
#include<string>
#include<map>
#include<queue>
using namespace std;




int main(){
	
	string tmp="01234567";
	queue<string>bfs;
	map<string,int>table;

	bfs.push(tmp);


	table[tmp]=0;	
	while(!bfs.empty()){
		string tmp=bfs.front();
		bfs.pop();
		string next;

		for(int i=0;i<4;i++){
			next=tmp;
			if(next[i]!='0'&&next[i+4]!='0')continue;
			swap(next[i],next[i+4]);
			if(table[next]!=0)continue;
			table[next]=table[tmp]+1;
			bfs.push(next);
		}

		for(int i=0;i<3;i++){
			next=tmp;
			if(next[i]!='0'&&next[i+1]!='0')continue;
			swap(next[i],next[i+1]);
			if(table[next]!=0)continue;
			table[next]=table[tmp]+1;
			bfs.push(next);
		}

		for(int i=0;i<3;i++){
			next=tmp;
			if(next[i+4]!='0'&&next[i+5]!='0')continue;
			swap(next[i+4],next[i+5]);
			if(table[next]!=0)continue;
			table[next]=table[tmp]+1;
			bfs.push(next);
		}
	}
	//?????????????´??????????0
	table["01234567"]=0;

	char x;
	while(cin>>x){
		string ans="";
		ans.push_back(x);
		for(int i=0;i<7;i++){
			cin>>x;
			ans.push_back(x);
		}
		cout<<table[ans]<<endl;
	}
	return 0;
}