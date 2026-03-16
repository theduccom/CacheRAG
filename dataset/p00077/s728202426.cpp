#include<iostream>
#include<string>
using namespace std;
int main(){
	string a;
	while(getline(cin,a)){
		int i=0;
		while(true){
			bool t=false;
			if(a[i]=='@'){
				for(int j=0;j<a[i+1]-'0';j++)
					cout<<a[i+2];
				i+=2;
				if(i>=a.size())
				break;
				t=true;
			}
			if(i>=a.size())
				break;
			if(t==false)
				cout<<a[i];
			i++;
			if(i>=a.size())
				break;
		}
		cout<<endl;
	}
	return 0;
}