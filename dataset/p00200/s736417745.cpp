// 0200
#include <iostream>
#include <vector>
#include <queue>
#define  N   10000000
using namespace std;

struct rail{
	int st;
	int num;
};

int com_min(int p, int q, vector<vector<rail> > table){
	vector<int> store;
	for(int i=0;i<table.size();i++)
		store.push_back(N);

	store[p] = 0;
	queue<int> sta;
	sta.push(p);

	while(!sta.empty()){
		int x = sta.front();
		for(int i=0;i<table[x].size();i++){
			if(store[table[x][i].st] > store[x] + table[x][i].num){
				store[table[x][i].st] = store[x] + table[x][i].num;
				sta.push(table[x][i].st);
			}
		}
		sta.pop();
	}

	return store[q];
}

int main(){
	while(1){
		int m, n, a, b, cost, time;
		rail ra;
		vector<vector<rail> > c_table, t_table;

		cin>>n>>m;
		if((n == 0) && (m == 0))
			break;

		c_table.resize(m+1);
		t_table.resize(m+1);

		for(int i=0;i<n;i++){
			cin>>a>>b>>cost>>time;
			ra.st = b;
			ra.num = cost;
			c_table[a].push_back(ra);
			ra.num = time;
			t_table[a].push_back(ra);
			ra.st = a;
			t_table[b].push_back(ra);
			ra.num = cost;
			c_table[b].push_back(ra);
		}

		int k, p, q, r;

		cin>>k;
		for(int i=0;i<k;i++){
			cin>>p>>q>>r;
			
			if(r == 0)
				cout<<com_min(p, q, c_table)<<endl;
			else if(r == 1)
				cout<<com_min(p, q, t_table)<<endl;
		}

	}
	return 0;
}