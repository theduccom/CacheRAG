#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int a,b,c,n,r;
	while(cin>>a>>b>>c,a|b|c){
		cin>>n;
		if(a>b)swap(a,b);
		if(b>c)swap(b,c);
		while(n--){
			cin>>r;
			cout<<(a*a+b*b<4*r*r?"OK":"NA")<<endl;
		}
	}
	return 0;
}