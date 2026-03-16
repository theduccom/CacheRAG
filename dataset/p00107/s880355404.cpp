#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int data[3],n,a;
	while(1){
		for(int i=0;i<3;i++){
			cin>>data[i];
		}
		if(data[0]==0)break;
		cin>>n;
		sort(data,data+3);
		for(int i=0;i<n;i++){
			cin>>a;
			if(2*a*2*a>data[0]*data[0]+data[1]*data[1]){
				cout<<"OK"<<endl;
			}else{
				cout<<"NA"<<endl;
			}
		}
	}
}