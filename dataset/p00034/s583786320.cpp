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
int main(){
	int ta[10],v1,v2;
	char xx;
	while(true){
	int sum=0;
	for(int i=0;i<10;i++){cin>>ta[i]>>xx;sum+=ta[i];}
	if(!(cin>>v1>>xx>>v2))break;
	double t=0.0;
	for(;;t+=0.001){
		if(v1*t+v2*t>=sum)break;
	}
	int ans=0;double tsum=0.0;
	for(int i=0;i<10;i++){
		if(tsum>v1*t)break;
	if(t*v1-tsum<=0.00001){break;}
	tsum+=ta[i];
	ans++;
	}
		cout<<ans<<endl;
	}

	return 0;
}