#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

struct Node
{
	vector<int> to,cost;
};

struct Tri
{
	int p,ct;
	Tri(int pp, int cc) {p=pp;ct=cc;}

	bool operator<(const Tri &t) const
	{
		return ct > t.ct;
	}
};

Node node[32];
bool visited[32];

int main()
{
	char c1,c2,c3;
	int x1,x2,y1,y2;
	int n,m,a,b,ab,ba;
	cin >> n >> m;
	while(m--)
	{
		cin >> a >> c1 >> b >> c2 >> ab >> c3 >> ba;
		node[a].to.push_back(b);
		node[a].cost.push_back(ab);
		node[b].to.push_back(a);
		node[b].cost.push_back(ba);
	}
	cin >> x1 >> c1 >> x2 >> c2 >> y1 >> c3 >> y2;
	
	memset(visited,0,sizeof(visited));
	priority_queue<Tri> pq;
	pq.push(Tri(x1,0));
	while(!pq.empty())
	{
		Tri tt = pq.top(); pq.pop();
		
		if(tt.p == x2)
		{
			y1-=tt.ct;
			break;
		}

		if(visited[tt.p])continue;
		visited[tt.p] = true;

		for(int i=0; i<node[tt.p].to.size(); i++)
		{
			pq.push(Tri(node[tt.p].to[i], node[tt.p].cost[i]+tt.ct));
		}
	}
	memset(visited,0,sizeof(visited));
	while(!pq.empty()) pq.pop();
	pq.push(Tri(x2,0));
	while(!pq.empty())
	{
		Tri tt = pq.top(); pq.pop();
		
		if(tt.p == x1)
		{
			y1-=tt.ct;
			break;
		}

		if(visited[tt.p])continue;
		visited[tt.p] = true;

		for(int i=0; i<node[tt.p].to.size(); i++)
		{
			pq.push(Tri(node[tt.p].to[i], node[tt.p].cost[i]+tt.ct));
		}
	}

	cout << y1-y2 << endl;
}