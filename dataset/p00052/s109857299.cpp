#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,a;
	while(cin>>n,n){
	a=0;
	while(n>1){a+=n/5;n/=5;}
	cout<<a<<endl;
	}
}