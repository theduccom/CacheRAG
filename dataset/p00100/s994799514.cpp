#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int main()
{
	while(1)
	{
		int n; cin >> n ;
		if(!n) break;
		map<int,long long> a;
		vector<int> ans;
		queue<int> q;
		for(int i=0;i<n;i++)
		{
			long b,c; int num;
			cin >> num >> b	>> c ;
			a[num]+=(long long) b*c;
			bool flag=true;
			for(int j=0;j<q.size();j++)
			{
				int tmp=q.front();
				if(tmp==num) flag=false;
				q.push(tmp); q.pop();
			}
			if(flag==true) q.push(num);
		}
		map<int,long long>::iterator p;
		bool flag=false;
		for(p=a.begin(); p!=a.end();p++)
			if(p->second >= 1000000) {ans.push_back(p->first); flag=true;}
		if(flag==false) cout << "NA" << endl;
		else
		{
			while(!q.empty() && !ans.empty())
			{
				vector<int>::iterator p;
				int tmp=q.front(); q.pop();
				p=find(ans.begin(),ans.end(),tmp);
				if(p!=ans.end()) cout << *p << endl;
			}
		}
	}
}