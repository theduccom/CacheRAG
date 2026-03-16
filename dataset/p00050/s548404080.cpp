#include<iostream>
#include<string>
using namespace std;
int main()
{
	string in;
	getline(cin,in);

	for(int i=0;i<in.size();i++)
	{
		if(i<in.size()-4&&in[i]=='a'&&in[i+1]=='p'&&in[i+2]=='p'&&in[i+3]=='l'&&in[i+4]=='e')
		{
			in[i]='p'; in[++i]='e'; in[++i]='a'; in[++i]='c'; in[++i]='h';
		}
		else if(i<in.size()-4&&in[i]=='p'&&in[i+1]=='e'&&in[i+2]=='a'&&in[i+3]=='c'&&in[i+4]=='h')
		{
			in[i]='a'; in[++i]='p'; in[++i]='p'; in[++i]='l'; in[++i]='e';
		}
	}
	cout<<in<<endl;

  return 0;
}