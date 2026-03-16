#include<iostream>
#include<algorithm>
using namespace std;


int main(){
	int n;
	while(cin>>n&&n){
		int maxp,maxd=-1;
		for(int i=0;i<n;i++){
			int p,d1,d2;
			cin>>p>>d1>>d2;
			if(maxd<d1+d2){
				maxd=d1+d2;
				maxp=p;
			}
		}
		cout<<maxp<<' '<<maxd<<endl;
	}
	return 0;
}