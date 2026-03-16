#include<iostream>
using namespace std;
bool prime(int n){
	for(int i=2;i<n;i++){
		if(n%i==0)return false;
	}
	return true;
}

int main(){
	int x,xx;
	while(cin>>x){
		xx=x-1;
		while(prime(xx)==false)xx--;
		cout<<xx<<" ";
		xx=x+1;
		while(prime(xx)==false)xx++;
		cout<<xx<<endl;
	}
}