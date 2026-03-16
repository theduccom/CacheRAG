#include <iostream>
#include <algorithm>
#include <cstdio>
#include <math.h>
using namespace std;

int main() {
	
	int n,w;
	
	while(cin>>n){
		for(int i=n-1;i>1;i--){
			w=0;
			for(int j=2;j<224;j++){
				if(i%j==0&&i/j!=1)w=1;
			}
			if(w==0){cout<<i<<" ";break;}
		}
		for(int i=n+1;;i++){
			w=0;
			for(int j=2;j<224;j++){
				if(i%j==0&&i/j!=1)w=1;
			}
			if(w==0){cout<<i<<endl;break;}
		}
	}
}