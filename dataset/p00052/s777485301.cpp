#include <iostream>

using namespace std;

int main() {
	int n;
    while(1){
        int ct=0;
        cin>>n;
        if(!n)break;
        while(n/=5)ct+=n;
        cout<<ct<<endl;
    }
	return 0;
}