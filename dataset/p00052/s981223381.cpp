#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(void){

	int n;

	while(cin>>n){
	    if(n==0)break;
        int a=0;
        for(;;){
            if(n>=5)a+=n/5,n/=5;
            else break;
        }
        cout<<a<<endl;

	}


	return 0;
}