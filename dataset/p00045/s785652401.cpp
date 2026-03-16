#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void){
	int v,n,sumn=0;
	int sum=0,kind=0;
	while(cin >> v){
		cin.ignore();
		cin >> n;
		
		sum += v*n;
		sumn+= n;
		kind++;
	}
	cout << sum << endl;
	printf("%.0f\n", floor((double)sumn/kind+0.5));
}