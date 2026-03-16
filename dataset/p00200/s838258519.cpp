#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Node
{
public:
	vector<int> to,tm,my;
};

int T;
Node node[301];


class State
{
public:
	int p, tm, my;
	State(int p, int tm, int my)
	:p(p),tm(tm),my(my)
	{}
	
	bool operator<(const State& s) const
	{
		if(T==0) return my>s.my;
		return tm>s.tm;
	}
};

int Dijkstra(int s, int d)
{
	priority_queue<State> q;
	q.push(State(s,0,0));
	
	bool v[301]={0};
	while(!q.empty())
	{
		State t=q.top(); q.pop();
		if(v[t.p]) continue;
		v[t.p]=1;
		if(t.p==d)
		{
			if(T==0) return t.my;
			else return t.tm;
		}
		
		for(int i=0; i<node[t.p].to.size(); i++)
		{
			int next=node[t.p].to[i];
			if(v[next]) continue;
			q.push(State(next, t.tm+node[t.p].tm[i], t.my+node[t.p].my[i]));
		}
	}
	
	return 0;
}

int main()
{
	int M,N;
	while(cin >> M >> N, (M||N))
	{
		for(int i=0; i<301; i++)
		{
			 node[i].to.clear();
			 node[i].tm.clear();
			 node[i].my.clear();
		}
		while(M--)
		{
			int s,d,t,m;
			cin >> s >> d >> m >> t;
			node[s].to.push_back(d);
			node[d].to.push_back(s);
			node[s].tm.push_back(t);
			node[d].tm.push_back(t);
			node[s].my.push_back(m);
			node[d].my.push_back(m);
		}
		
		int Q;
		cin >> Q;
		while(Q--)
		{
			int s,d;
			cin >> s >> d >> T;
			cout << Dijkstra(s,d) << endl;
		}
	}
}