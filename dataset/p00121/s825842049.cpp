#include<iostream>
#include<algorithm>
#include<queue>
#include<map>
using namespace std; 
map<string,int>	sta;
int direct[4]={1,-1,4,-4};

void BFS()
{
	queue<string> q;
	q.push("01234567");
	sta["01234567"]=0;
	while(!q.empty())
	{
		string now=q.front();
		q.pop();
		
		int p;
		for(int i=0;i<8;++i)
			if(now[i]=='0')	
			{
				p=i;
				break;
			}
			
		for(int i=0;i<4;++i)
		{
			int n=p+direct[i];
			
			if(n<8&&n>=0&&!(p==3&&i==0)&&!(p==4&&i==1))
			{
				string next=now;
				swap(next[p],next[n]);
				if(sta.find(next)==sta.end())//判断该元素是否存在 
				{
					sta[next]=sta[now]+1;
					q.push(next); 
				}				
			}	
		}	
	}
}

int main()
{
	char a;
	string b;
	BFS();
	while(cin>>a)
	{
		b+=a;
		cin.get();
		for(int i=0;i<7;++i)
		{
			cin>>a;
			b+=a;
			cin.get();
		}
		cout<<sta[b]<<endl;
		b.erase(b.begin(),b.end());
	}
	
	return 0;
}
