#include<string>
#include<iostream>

using namespace std;

int main()
{
	int cnt=0;
	string s;

	while(cin>>s){
		int len=s.length();
		bool b=true;
		for(int i=0;i<len/2;i++)
			if(s[i]!=s[len-i-1])	b=false;
		if(b)	cnt++;
	}
	cout<<cnt<<endl;

	return 0;
}