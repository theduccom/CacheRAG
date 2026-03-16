#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int x,y,z;
	while(1){
		cin>>x>>y>>z;
		if(x==0 && y==0 &&z==0)return 0;
		int dia[3];
		dia[0]=hypot(x,y)/2;
		dia[1]=hypot(y,z)/2;
		dia[2]=hypot(z,x)/2;
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			int r;
			cin>>r;
			if(r>dia[0] || r>dia[1] || r>dia[2]){
				cout<<"OK"<<endl;
			}else{
				cout<<"NA"<<endl;
			}
		}
	}
	return 0;
}