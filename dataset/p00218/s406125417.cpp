#include <iostream>
using namespace std;
int main(){
	int n;
	while(1){
		cin>>n;
		if(n==0) break;
		for(int i=1;i<=n; i++){
			int pj,pm,pe;
			cin>>pm>>pe>>pj;
			if(pj==100||pm==100||pe==100){
				cout<<"A"<<endl;
			}else if((pm+pe)/2>=90){
				cout<<"A"<<endl;
			}else if((pj+pm+pe)/3>=80){
				cout<<"A"<<endl;
			}else if((pj+pm+pe)/3>=70){
				cout<<"B"<<endl;
			}else if((pj+pm+pe)/3>=50&&pm>=80||pe>=80){
				cout<<"B"<<endl;
			}else{
				cout<<"C"<<endl;
			}
		} 
	} 
}