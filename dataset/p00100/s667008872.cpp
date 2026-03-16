#include<iostream>
#include<queue>

using namespace std;

int main()
{
	
	while(1)
	{
		int sum = 0;
		int n;
		cin >> n;
		if(n == 0) break;
		
		queue<int> q;
		bool checked[4000];
		long long list[4000];
		for(int i = 0;i < 4000;i++)
		{
			checked[i] = false;
			list[i] = 0;
		}
		for(int i = 0;i < n;i++)
		{
			long long no, x, y;
			cin >> no >> x >> y;
			list[no - 1] += x * y;
			if(!checked[no - 1])
			{
				q.push(no);
				checked[no - 1] = true;
			}
		}
		
		while(!q.empty())
		{
			int no = q.front();
			q.pop();
			if(list[no - 1] >= 1000000)
			{
				cout << no << endl;
				sum++;
			}
		}
		if(sum == 0) cout << "NA" << endl;
	}
	return 0;
}