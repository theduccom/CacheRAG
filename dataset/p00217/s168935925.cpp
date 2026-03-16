#include <iostream>
using namespace std;

int main(void){
	int n;
	while(cin>>n && n){
		int maxP=-1,maxD=0;
		for(int i=0;i<n;i++){
			int p,d1,d2;
			cin>>p>>d1>>d2;
			if(maxD < d1 + d2){
				maxP = p;
				maxD = d1 + d2;
			}
		}

		cout<<maxP<<" "<<maxD<<endl;
	}

	return 0;
}