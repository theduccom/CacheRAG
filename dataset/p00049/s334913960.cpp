#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	int a[4]={0};
	string type;
	while(cin>>n){
		cin.ignore();
		cin>>type;
		if(type=="A")a[0]++;
		else if(type=="B")a[1]++;
		else if(type=="AB")a[2]++;
		else if(type=="O")a[3]++;
	}
	for(int i=0;i<4;i++)cout<<a[i]<<endl;
	return 0;
}