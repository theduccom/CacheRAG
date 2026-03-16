#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N , M;
	char C;
	cin >> N >> M;
	vector<vector<pair<int , int>>>data(N);
	for(size_t i = 0; i < M; i++)
	{
		int a , b , c , d;
		cin >> a >> C >> b >> C >> c >> C >> d;
		a--; b--;
		data[a].push_back(make_pair(b , c));
		data[b].push_back(make_pair(a , d));
	}
	int x1 , x2 , y1 , y2;
	cin >> x1 >> C >> x2 >> C >> y1 >> C >> y2;
	x1--; x2--;
	vector<int>cost1(N , INT_MAX / 6);
	auto cost2 = cost1;
	priority_queue<pair<int , int> , vector<pair<int , int>> , greater<pair<int , int>>>que1 , que2;
	que1.push(make_pair(0 , x1));
	cost1[x1] = 0;
	while(que1.size())
	{
		auto now = que1.top(); que1.pop();
		if(now.second == x2)break;
		for(auto x : data[now.second])
		{
			if(cost1[x.first] > now.first + x.second)
			{
				cost1[x.first] = now.first + x.second;
				que1.push(make_pair(cost1[x.first] , x.first));
			}
		}
	}
	y1 -= cost1[x2];
	que2.push(make_pair(0 , x2));
	cost2[x2] = 0;
	while(que2.size())
	{
		auto now = que2.top(); que2.pop();
		if(now.second == x1)break;
		for(auto x : data[now.second])
		{
			if(cost2[x.first] > now.first + x.second)
			{
				cost2[x.first] = now.first + x.second;
				que2.push(make_pair(cost2[x.first] , x.first));
			}
		}
	}
	y1 -= cost2[x1];
	y1 -= y2;
	cout << y1 << endl;
}