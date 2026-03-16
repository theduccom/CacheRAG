#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main(){
	int n,a[10],b[10],k;
	a[0]=1;
	for(int i=1;i<10;i++){
		a[i]=2*a[i-1];
	}
	
	while(cin >> n){
		for(int i=0;i<10;i++){
			b[i]=0;
		}
		for(int i=9;n!=0;i--){
			if(n>=a[i]){
				n-=a[i];
				b[i]=a[i];
			}
		}
		k=0;
		for(int i=0;i<10;i++){
			
			if(b[i]!=0){
				if(k!=0){
					cout <<" ";
				}
				cout << b[i] ;
				k++;
			}
		}
		cout << "\n" ;
	}
		
		
		
return 0;
}