#include<iostream>
using namespace std;
int main(){
	int n,p,d1,d2,maxp,maxv;
	while(1){
		cin >> n;
		if(n == 0) break;
		maxp = maxv = 0;
		while(n --){
			cin >> p >> d1 >> d2;
			if(maxv < d1+d2){
				maxp = p;
				maxv = d1+d2;
				}
		}
		cout<< maxp <<" "<<  maxv<<endl;
	}
}