#include<cstdio>
#include<algorithm>
#include<functional>
#include<iostream>
#include<string>
#include<vector>
#define F1 first.first
#define F2 first.second
#define F3 second
using namespace std;
typedef pair<string,int> pp;
int main(void)
{
	int i,j,k,num[1001],n,cnt=0;
	string c;
	vector<pp> s;
	while(cin>>c>>n) {
		s.push_back(pp(c,n));
		cnt++;
	}
	sort(s.begin(),s.end());
	for(i=0;i<cnt;i++) {
		if(!i) cout<<s[i].first<<endl<<s[i].second;
		if(i>0) {
			if(s[i-1].first==s[i].first) cout<<" "<<s[i].second;
			else cout<<endl<<s[i].first<<endl<<s[i].second;
		}
	}
	cout<<endl;
}
	
	
	