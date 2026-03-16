#include<iostream>
#include<string>
using namespace std;
int main(){
	string a,b;
	getline(cin,a);
	b=a;
	for(int i=0;i<a.size();i++){
		for(int j=0;j<=25;j++){
			if(a[i]=='a'+j)b[i]='A'+j;
		}
	}
	cout<<b<<endl;
	return 0;
}