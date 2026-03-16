#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>

typedef long long int ll;


using namespace std;

vector<int>p(50010,1);
int n;

void calc(){
	for(int i=0; i<50010; i++){
		if(i<2)p[i]=0;
		else{
			for(int j=2; j<=sqrt(i); j++){
				if(i%j==0){
					p[i]=0;
					break;
				}
			}
		}
	}
}

int f(){
	int a=0;
	for(int i=0; i<=n/2; i++){
		if(p[i]&&p[n-i])a++;
	}
	return a;
}

int main(){
	calc();
	while(1){
		cin>>n;
		if(n==0)break;
		cout<<f()<<endl;
	}
}