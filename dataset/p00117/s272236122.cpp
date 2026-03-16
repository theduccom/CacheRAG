// 0117
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <queue>
#define  N    10000000
using namespace std;

struct road{
	int v;
	int cost;
};

int com_min(int x, int y, vector<vector<road> > town){
	vector<int> c;

	for(int i=0;i<=town.size();i++)
		if(i == x)
			c.push_back(0);
		else
			c.push_back(N);

	queue<int> ver;
	ver.push(x);

	while(!ver.empty()){
		int f = ver.front();
		for(int i=0;i<town[f].size();i++)
			if(c[town[f][i].v] > c[f] + town[f][i].cost){
				c[town[f][i].v] = c[f] + town[f][i].cost;
				ver.push(town[f][i].v);
			}
		ver.pop();
	}

	return c[y];
}

int main(){
	int n, m, a, b, c, d;
	vector<vector<road> > town;
	road r;

	cin>>n;
	town.resize(n+1);

	cin>>m;
	for(int i=0;i<m;i++){
		scanf("%d,%d,%d,%d", &a, &b, &c, &d);

		r.v = b;
		r.cost = c;
		town[a].push_back(r);
		r.v = a;
		r.cost = d;
		town[b].push_back(r);
	}

	int x1, x2, y1, y2;
	scanf("%d,%d,%d,%d", &x1, &x2, &y1, &y2);

	cout<<y1-y2-com_min(x1, x2, town)-com_min(x2, x1, town)<<endl;

	return 0;
}