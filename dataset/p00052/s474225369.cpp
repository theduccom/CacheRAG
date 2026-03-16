#include <iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		if(n==0) break;
		int zero=0,a=n;
		while(a>=5){
			a /= 5;
			zero += a;
		}
		cout<<zero<<endl;
	}
	return 0;
}