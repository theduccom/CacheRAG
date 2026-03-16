#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<cstring>
using namespace std;


int main(){
	while(1){
		int n,a[10],i,j,k;
		cin>>n;
		if(n==0)break;
		for(i=0;i<10;i++){
			a[i]=0;
		}
		for(i=0;i<n;i++){
			cin>>j;
			a[j]++;
		}
		for(i=0;i<10;i++){
			if(a[i]==0){
				cout<<'-'<<endl;
			}else{
				for(j=0;j<a[i];j++){
				cout<<'*';
				}
				cout<<endl;
			}
		}	
	}
    return 0;
}