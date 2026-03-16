#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
using namespace std;

int main(){
	int b1,b2,b3,s,o,n;
	string c;
	cin>>n;
	for(int i=0;i<n;i++){
		b1=0;b2=0;b3=0;s=0;o=0;
		while(o<3){
			cin>>c;
			if(c=="HIT"){
				if(b3){s++;b3=0;}
				if(b2){b3=1;b2=0;}
				if(b1)b2=1;
				b1=1;
			}
			else if(c=="HOMERUN"){
				if(b1&&b2&&b3)s+=4;
				else if(b1&&b2||b2&&b3||b3&&b1)s+=3;
				else if(b1||b2||b3)s+=2;
				else s++;
				b1=0;b2=0;b3=0;
			}
			else o++;
		}
		cout<<s<<endl;
	}
}