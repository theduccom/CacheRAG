#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<sstream>
#include<algorithm>
#include<cmath>
#include<map>
#include<functional>
#include<queue>
#include<stack>
#include<set>
using namespace std;
int main(){
	int a,b,c,d,e;
	char x;
	while(cin>>a>>x>>b>>x>>c>>x>>d>>x>>e){
		string ans="null";
	int ta[14]={0};
	ta[a]++,ta[b]++,ta[c]++,ta[d]++,ta[e]++;
	int two=0,three=0,four=0;
	for(int i=1;i<=13;i++){if(ta[i]==2)two++;if(ta[i]==3)three++;if(ta[i]==4)four++;}
		if(two==1)ans="one pair";
		if(two==2)ans="two pair";
		if(three==1)ans="three card";
		for(int i=1;i<=13-4;i++)if(ta[i]==1&&ta[i+1]==1&&ta[i+2]==1&&ta[i+3]==1&&ta[i+4]==1)ans="straight";
		
		if(ta[10]==1&&ta[11]==1&&ta[12]==1&&ta[13]==1&&ta[1]==1)ans="straight";
		if(two==1&&three==1)ans="full house";
		if(four==1)ans="four card";
		cout<<ans<<endl;
	}
	return 0;
}