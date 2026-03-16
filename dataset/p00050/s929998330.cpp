#include<iostream>
using namespace std;
string str,tmp,x="apple",y="peach";
int main(){
	getline(cin,str);
	for(int i=0;i<(int)str.size()-4;i++){
		tmp=str.substr(i,5);
		if(tmp==x)for(int j=0;j<5;j++)str[i+j]=y[j];
		else if(tmp==y)for(int j=0;j<5;j++)str[i+j]=x[j];
	}
	cout<<str<<endl;
	return 0;
}