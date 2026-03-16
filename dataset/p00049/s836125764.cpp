#include <iostream>
#include <cstring>
using namespace std;
int main(){
	string s;
	char com;
	int a[4],b;
	for(int i=0;i<4;i++){
		a[i]=0;
	}
	while(cin>>b>>com>>s){
		if(s=="A")a[0]++;
		else if(s=="B")a[1]++;
		else if(s=="AB")a[2]++;
		else a[3]++;
	}
	for(int i=0;i<4;i++){
		cout<<a[i]<<endl;
	}
}