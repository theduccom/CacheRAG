#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
pair<string,int> a[100];
int main(){
	int t=0,g;
	string f;
	while(cin>>a[t].first>>a[t].second)t++;
	sort(a,a+t);
	cout<<a[0].first<<endl<<a[0].second;
	for(int i=1;i<t;i++){
		bool n=false;
		f=a[i].first,g=a[i].second;
		if(i)if(f==a[i-1].first)n=true;
		if(n)cout<<" "<<g;
		else cout<<endl<<f<<endl<<g;
	}
	cout<<endl;
	return 0;
}