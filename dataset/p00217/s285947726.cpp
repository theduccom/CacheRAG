#include <iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n,n){
		int p,d1,d2,maxp,maxd;
		maxp=0;
		maxd=0;
		for(int i=0; i<n; i++){
		cin>>p>>d1>>d2;
	if(maxd<d1+d2){
		maxd=d1+d2;
		maxp=p;
			}
		}	
		cout<<maxp<<" "<<maxd<<endl;
	}	
}