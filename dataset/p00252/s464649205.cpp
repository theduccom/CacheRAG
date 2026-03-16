#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	
	cin>>a>>b>>c;
	
	if(a==1&&b==0&&c==0){
		cout<<"Close"<<endl;
	}else if(a==0&&b==1&&c==0){
		cout<<"Close"<<endl;
	}else if(a==0&&b==0&&c==0){
		cout<<"Close"<<endl;
	}else{
		cout<<"Open"<<endl;
	}
	
	
	return 0;
}