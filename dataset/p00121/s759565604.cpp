#include<iostream>
#include<map>
#include<queue>
#include<algorithm>
#include<string>
using namespace std;
int direc[4]={1,-1,4,-4};
map<string,int> dp;
void check()
{
	queue<string> sum;
	sum.push("01234567");
	dp["01234567"]=0;
	while(sum.size())
	{
		string str=sum.front();
		sum.pop();
		int p;
		for(int i=0;i<8;i++)
			if(str[i]=='0')
			{
				p=i;
				break;
			}
		for(int i=0;i<4;i++)
		{
			int n=p+direc[i];
		if(n>=0&&n<8&&!(p==3&&i==0)&&!(p==4&&i==1))
		{
			string new1=str;
			swap(new1[n],new1[p]);
			if(!dp.count(new1))
			{
				dp[new1]=dp[str]+1;
				sum.push(new1);
			}
		}
		}
	}
}
int main()
{
	check();
	string strs;
	while(getline(cin,strs))
	{
		strs.erase(remove(strs.begin(),strs.end(),' '),strs.end());
		cout<<dp[strs]<<endl;
	}
	return 0;
}