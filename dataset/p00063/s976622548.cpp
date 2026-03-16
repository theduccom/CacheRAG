#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
	string ss;
	int ans=0;
	while(cin >> ss){
		for(int i=0;i<ss.length();i++){
			if(ss[i]!=ss[ss.length()-1-i])goto next;
		}
		ans++;
next:;
	}
	cout << ans << "\n";
	return 0;
}