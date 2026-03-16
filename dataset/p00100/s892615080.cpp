#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(void){
	int n;
	while(1){
		cin >> n;
		if(n==0)
			break;
		long int c[4001]={};
		int id[100000];
		for (int i=0; i<n; i++){
			long int p , q;
			cin >> id[i] >> p >> q;
			c[id[i]] += p*q;
		}
		bool f=1;
		for (int i=0; i<n; i++){
			if (c[id[i]]>=1000000){
				cout << id[i] << endl;
				c[id[i]]=0;
				f=0;
			}
		}
		if (f)
			cout << "NA" << endl;

	}

	return 0;
}