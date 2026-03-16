#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <cmath>

#define PI 3.14159265359
#define R  1.41421356237

using namespace std;

int sq(int a){
return a*a;
}

int main(){
	int l[3],t;
	int m,n,c=0;
	int r[10000];

	while(1){

		cin >> l[0] >> l[1] >> l[2];

		if((l[0]+l[1]+l[2])==0)break;

		cin >> n;

		//sort length
		sort(l,l+3);

		for(int i=0;i<n;i++){
			cin >> t;

			if((2*t > l[0]) && (sq(t*2)-sq(l[0]) > sq(l[1]))){
				r[i] = 1;
			}else{
				r[i] = 0;
			}
		}

		for(int i=0;i<n;i++){
			if(r[i]==0){
				cout << "NA" << endl;
			}else{
				cout << "OK" << endl;
			}
		}
	}

	return 0;
}