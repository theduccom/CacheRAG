#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	char a;
	while(scanf("%c",&a) != EOF){
		if(a=='@'){
			int s;
			cin>>a;
			s = a-'0';
			cin>>a;
			for(int i=0; i<s; i++){
				cout<<a;
			}
		}
		else if(a=='\n')cout<<endl;
		else cout<<a;
	}
}