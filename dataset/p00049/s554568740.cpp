#include<iostream>
#include<string>

using namespace std;

int main(void)
{
	int n;
	char c;
	string s;
	int num[4]={};
	while(cin>>n>>c>>s)
	{
		if(s=="A")num[0]++;
		else if(s=="B")num[1]++;
		else if(s=="AB")num[2]++;
		else num[3]++;
	}
	for(int i=0;i<4;i++)
	{
		cout<<num[i]<<endl;
	}
}