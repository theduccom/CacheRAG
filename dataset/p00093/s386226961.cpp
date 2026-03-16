#include <iostream>
using namespace std;
int main(){
	int a,b,x=0,num=0;;
	while(cin>>a>>b){
		if(a==0&&b==0)break;
		if(num!=0)cout<<endl;
		for(int i=a;i<=b;i++){
			if(i%400==0){
				cout<<i<<endl;
				x=1;
			}else if(i%100==0){

			}else if(i%4==0){
				cout<<i<<endl;
				x=1;
			}
		}
		if(x==0)cout<<"NA"<<endl;
		x=0;
		num=1;
	}
	return 0;
}