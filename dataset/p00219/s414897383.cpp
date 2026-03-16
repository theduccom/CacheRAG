#include<iostream>
#include<map>
using namespace std;
int main(){
	int n,x;
	while(cin>>n,n){
		map<int,int> mp;
		for(int i=0;i<n;i++){
			cin>>x;
			mp[x]++;
		}
		for(int i=0;i<10;i++){
			if(mp[i]==0)
			cout<<'-'<<endl;
			else{
				for(int j=0;j<mp[i];j++)
				cout<<'*';
				cout<<endl;
			}
		}
	}
	return 0;
}