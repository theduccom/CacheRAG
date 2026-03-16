#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
	int a=1,b=0,c=0;
	char x,y;
	while(scanf("%c,%c",&x,&y)!=EOF){
		if(x=='B'&&y=='A')swap(x,y);
		if(x=='C'&&y=='A')swap(x,y);
		if(x=='C'&&y=='B')swap(x,y);
		if(x=='A'&&y=='B'){
			swap(a,b);
		}else if(x=='A'&&y=='C'){
			swap(a,c);
		}else{
			swap(b,c);
		}
	}
	if(a==1)cout<<"A"<<endl;
	else if(b==1)cout<<"B"<<endl;
	else cout<<"C"<<endl;
	return 0;
}