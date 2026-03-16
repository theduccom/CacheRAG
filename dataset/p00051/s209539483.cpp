#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;



int main(){
	int num;
	string ss;
	cin>>num;
	for(int z=0;z<num;z++){
		cin>>ss;
		int cnt=ss.size();
		int dt[cnt];
		for(int i=0;i<cnt;i++){
			dt[i]=ss[i]-'0';
		}
		sort(dt,dt+cnt);
		long long max=0,min=0;
		for(int i=0;i<cnt;i++){
			max+=dt[i]*pow(10,i);
			min+=dt[cnt-(i+1)]*pow(10,i);
		}
		cout<<max-min<<endl;
	}
	return 0;
}