#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cin.ignore();
	while(n--) 
	{
		string in;
		int pos;
		getline(cin,in);
		pos=in.find("Hoshino");
		while(pos!=-1) 
		{
			in[pos]='H'; in[pos+1]='o'; in[pos+2]='s';
			in[pos+3]='h'; in[pos+4]='i'; in[pos+5]='n'; in[pos+6]='a';
			pos=in.find("Hoshino");
		}
		cout<<in<<endl;
	}
  return 0;
}