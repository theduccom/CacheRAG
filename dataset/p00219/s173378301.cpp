#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	vector<int> a(10);
	int n,sort;
	while(cin>>n){
		if(n==0) break;
		else{
		fill(a.begin(),a.end(),0);
		for(int i=0;i<n;i++){
			cin>>sort;
			a[sort]++;
		}
		for(int i=0;i<10;i++){
		if(a[i]==0){
		cout<<"-";
		}else{
		for(int j=0;j<a[i];j++){
			cout<<"*";
			}
	}
		cout<<endl;
}
}
}
}