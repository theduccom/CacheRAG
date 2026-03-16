#include<iostream>
#include<string>
using namespace std;
int main(){
	int count=0;
	string a;
	while(cin>>a){
		bool t=true;
		for(int i=0;i<a.size();i++){
			if(a[i]!=a[a.size()-i-1])
				t=false;
		}
		if(t==true)
			count++;
	}
	cout<<count<<endl;
	return 0;
}