#include<iostream>

using namespace std;

int main(){
	
	int S=0;
	double q=0;
	char conma;
	int v,n;
	double count=0;
	
	
	while(cin>>v>>conma>>n){
		if(v!=n!=0){
		S+=v*n;
		q+=n;
		count++;
		}
		else
			break;
	}
	if(count!=0){
		int f=q/count+0.5;
	cout<<S<<endl;
	cout<<f<<endl;
	}
	else{
		cout<<S<<endl;
		cout<<q<<endl;
	}
		
}