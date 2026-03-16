#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	int n;
	while(cin>>n&&n!=0){
		int maxNum=-1;
		int idx;
		for(int i = 0; i < n; i++){
			int p,d1,d2;
			cin>>p>>d1>>d2;
			int sum=d1+d2;
			if(maxNum<sum){
				maxNum=sum;
				idx=p;
			}
		}
		cout<<idx<<" "<<maxNum<<endl;
	}

	return 0;
}