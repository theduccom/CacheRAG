#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
using namespace std;

int main(){
	
	while(1){
	int a=0,b,c,d,e,x;
	scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e);
	for(int i=0;i<5;i++){
		if(a>b){x=a;a=b;b=x;}
		if(b>c){x=b;b=c;c=x;}
		if(c>d){x=c;c=d;d=x;}
		if(d>e){x=d;d=e;e=x;}
	}
	if(a==0)return 0;
	if(b==c&&c==d&&(a==b||d==e))cout<<"four card"<<endl;
	else if(a==b&&d==e&&(b==c||c==d))cout<<"full house"<<endl;
	else if(a==b&&b==c||b==c&&c==d||c==d&&d==e)cout<<"three card"<<endl;
	else if(a==b&&(c==d||d==e)||b==c&&d==e)cout<<"two pair"<<endl;
	else if(a==b||b==c||c==d||d==e)cout<<"one pair"<<endl;
	else if((b==a+1||b==a+9)&&c==b+1&&d==c+1&&e==d+1)cout<<"straight"<<endl;
	else cout<<"null"<<endl;
	}
}