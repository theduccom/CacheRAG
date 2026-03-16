#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<sstream>
#include<cmath>
#include<algorithm>
#include<map>
#include<functional>
#include<queue>
#include<stack>
#include<set>
using namespace std;
int stoi(string x){stringstream ss;ss<<x;int tmp;ss>>tmp;return tmp;}
string itos(int x){stringstream ss;ss<<x;return ss.str();}
int main(){
int n,cnt=0;
	int out=0,ans=0,now=0;
cin>>n;
	for(;;){
	if(cnt==n)break;
	string tmp;
	cin>>tmp;
	if(tmp=="OUT")out++;
	else if(tmp=="HIT")now++;
	if(tmp=="HOMERUN")ans+=now+1,now=0;
	if(now==4)now=3,ans++;
	if(out==3){cout<<ans<<endl;cnt++;out=0,ans=0,now=0;}
	}
		return 0;
}