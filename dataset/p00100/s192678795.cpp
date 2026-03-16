#include<map>
#include<iostream>

using namespace std;

int main()
{
	int n;
	while(cin>>n,n){
		map<int,long long> mp;
		bool flag=false;
		while(n--){
			int id,unit,num;
			cin>>id>>unit>>num;
			if(mp[id]<1000000 && 1000000<=mp[id]+(long long)unit*num){
				cout<<id<<endl;
				flag=true;
			}
			mp[id]+=(long long)unit*num;
		}
		if(!flag)	cout<<"NA"<<endl;
	}
	return 0;
}