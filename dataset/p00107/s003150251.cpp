#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

bool check(double x,double y,double z,double r){
	return sqrt(x*x+y*y) < r*2;
}

int main(){
	int data[3],r,n;
	while(cin >> data[0] >> data[1] >> data[2],data[0]){
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> r;
			bool ret = false;
			sort(data,data+3);
			do{
				 ret |= check(data[0],data[1],data[2],r);
			}while(next_permutation(data,data+3));
			cout << (ret?"OK":"NA") << endl;
		}
	}
}