#include<iostream>
#include<string>
using namespace std;
int main(){
	int a,b,c,h=0,w=0;
	char d;
	while(cin>>a>>d>>b>>d>>c){
		if(a==b)
			h++;
		if(a*a+b*b==c*c)
			w++;
	}
	cout<<w<<endl;
	cout<<h<<endl;
	return 0;
}