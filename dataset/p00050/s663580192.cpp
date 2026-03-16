#include<iostream>
#include<string>
using namespace std;
int main(){
	string a;
	getline(cin,a);
	for(int i=0;i<=a.size()-5;i++){
		if(a[i]=='a'&&a[i+1]=='p'&&a[i+2]=='p'&&a[i+3]=='l'&&a[i+4]=='e'){
			a[i]='p';
			a[i+1]='e';
			a[i+2]='a';
			a[i+3]='c';
			a[i+4]='h';
		}
		else if(a[i]=='p'&&a[i+1]=='e'&&a[i+2]=='a'&&a[i+3]=='c'&&a[i+4]=='h'){
			a[i]='a';
			a[i+1]='p';
			a[i+2]='p';
			a[i+3]='l';
			a[i+4]='e';
		}
	}
	cout<<a<<endl;
	return 0;
}