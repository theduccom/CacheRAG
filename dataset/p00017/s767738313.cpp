#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
	while(getline(cin,s)){
		int n=s.size();
		for(int k=0;k<26;k++){
			for(int i=0;i<n;i++)if('a'<=s[i]&&s[i]<='z')s[i]='z'<(s[i]+1)?'a':(s[i]+1);
			if(s.find("the")!=string::npos||s.find("this")!=string::npos||s.find("that")!=string::npos)break;
		}
		cout<<s<<endl;
	}
    return 0;
}