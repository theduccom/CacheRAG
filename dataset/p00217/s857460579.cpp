#include<iostream>
using namespace std;

int main(){
	while(1){
		int n,p,d1,d2,max=0,maxn;
		cin >> n;
		if(n==0)break;
		for(int i=0;i<n;i++){
			cin >> p >> d1 >> d2;
			if(d1+d2>=max){
				max=d1+d2;
				maxn=p;
			}
		}
		cout << maxn << " " << max << endl;
	}
	return 0;
}