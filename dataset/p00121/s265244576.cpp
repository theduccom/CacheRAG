#include<iostream>
#include<queue>
#include<string.h>
#include<string>
#include<map>
#include<stdio.h> 
#include<math.h>
#include<algorithm>
using namespace std;
string str,str1;  int dx[4]={-1,1,4,-4}; 
map <string,int> mp;

int posi;
void bfs()
{
    queue <string> que;
    que.push("01234567");
     mp["01234567"]=0;
    while(que.size())
    {
    	string preq=que.front(); que.pop();
			for(int i=0;i<8;i++) if(preq[i]=='0') {
			posi=i; break;} 
		for(int i=0;i<4;i++)
		{
		    	int nposi=posi+dx[i];
				string q=preq;
				swap(q[posi],q[nposi]);
				if(mp.find(q)!=mp.end()||i==0&&nposi==3||i==1&&nposi==4||nposi>7||nposi<0) continue;
				que.push(q);
				mp[q]=mp[preq]+1;
		} 
	}
} 

int main()
{	
	bfs();
	while(getline(cin,str1)) 
	{
	   str.clear();
	   for(int i=0;i<str1.size();i++)
	   {
	       if(str1[i]!=' ')
	       str+=str1[i];
	   } 
	   printf("%d\n",mp[str]);
	}
	return 0;
}
