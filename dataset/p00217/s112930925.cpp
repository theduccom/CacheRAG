#include <iostream>
using namespace std;

int main() {
	int n,p,d1,d2,max_p,max_d;
	
	while(cin>>n,n){
		max_d=0;
		for(;n;--n){
			cin>>p>>d1>>d2;
			if(max_d<d1+d2){
				max_d=d1+d2;
				max_p=p;
			}
		}
		cout<<max_p<<" "<<max_d<<endl;
	}
	return 0;
}