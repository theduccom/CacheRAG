#include<iostream>
#include<map>
#include<queue>
#include<algorithm>
using namespace std;
int dd[4] = {1,-1,4,-4};

int num;
map<string, int> d;
string str = "01234567";

queue<string> que;
void bfs()
{	
	int pos;
	while(que.size())
	{
		string s = que.front();que.pop();
		for(int i=0;i<8;i++)
			if(s[i] == '0')
				{pos = i;break;}
		for(int i = 0;i <4;i++)
		{
			
			string s2 =s;
			swap(s2[pos],s2[pos+dd[i]]);
			map<string, int>::iterator it = d.find(s2);
			if(pos+dd[i]<8 && pos+dd[i]>=0 && !(pos==3 && dd[i] == 1) && !(pos == 4 && dd[i] == -1) && it == d.end())
			{
				que.push(s2);
				d[s2] = d[s]+1; 
			}
		}
	}	
}
void solve()
{
	
     str.erase(remove(str.begin(), str.end(), ' '), str.end());
	 //cout << str<<endl;
	 //if(str=="01234567")
	 cout<<d[str]<<endl;
}
int main()
{
	
	que.push(str);
	d[str] = 0;
	bfs();
	while(getline(cin,str))
		solve();		
}