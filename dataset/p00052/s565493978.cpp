#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>

using namespace std;



int main(){
	int n;
	while(1){
		cin>>n;
		if(n==0)break;
		int cnt=0;
		for(int i=5; i<=n; i*=5){
			cnt+=n/i;
		}
		cout<<cnt<<endl;
	}
}