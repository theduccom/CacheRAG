#include <iostream>
 #include <math.h>
 #include <string>
using namespace std;

int main() {
	
	int n;
	char c;
	int a[4];
	a[1]=0;
	a[0]=0;
	a[2]=0;
	a[3]=0;
	string s;
while(cin>>n>>c>>s){
	if(s=="A"){
		a[0]=a[0]+1;
	}
	if(s=="B"){
		a[1]=a[1]+1;
	}
	if(s=="AB"){
		a[2]=a[2]+1;
	}
	if(s=="O"){
		a[3]=a[3]+1;
	}
}
cout<<a[0]<<endl<<a[1]<<endl<<a[2]<<endl<<a[3]<<endl;

	return 0;
}