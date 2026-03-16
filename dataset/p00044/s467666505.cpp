#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;

void sieve(bool* a){
	for(int i=2;i<=sqrt(50100.);++i){
		if(a[i]){
			for(int j=i*2;j<=50100;j+=i){
				a[j]=false;
			}
		}
	}
}

int main(){
	int n;
	bool a[50101];
	memset(a , true , sizeof(a));
	a[0]=a[1]=false;
	sieve(a);
	while(cin>>n){
		int i,j;
		for(i=n-1;i>=2;--i){
			if (a[i]==true) break;
		}
		for(j=n+1;j<=50101;++j){
			if(a[j]==true) break;
		}
		cout << i << " " << j << endl;
	}
	return 0; 
}