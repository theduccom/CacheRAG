#include<iostream>
#include<cstdio>
using namespace std;

bool uruu(int y){
	bool ch=false;
	if(y%4==0)ch=true;
	if(y%100==0)ch=false;
	if(y%400==0)ch=true;
	return ch;
}

int main(void){
	int f,t;
	bool k=false;
	while(1){
		bool u=false;
		cin >> f >> t;
		if(f==0 && t==0)break;
		if(k)cout << endl;
		for(int i=f;i<=t;i++){
			if(uruu(i)){
				u=true;
				cout << i << endl;
			}
		}
		if(!u)cout << "NA" << endl;
		k=true;
	}
    return 0;
}