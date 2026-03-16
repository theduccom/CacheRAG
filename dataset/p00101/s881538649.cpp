#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;

int main () {
	int n,i,count=0;
	int temp,temp1;
	string s;
	string bef = "Hoshino";
	string aft = "Hoshina";
	scanf("%d",&n);
	cin.ignore();
	for(i=0;i<n;i++)
	{
		getline(cin,s);
		string::size_type pos = s.find(bef);
		while(pos != string::npos){
			s.replace(pos, bef.size(), aft);
			pos = s.find(bef, pos + aft.size());
		}
		printf("%s\n",s.c_str());
	}
}