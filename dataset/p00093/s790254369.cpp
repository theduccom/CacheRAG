#include <iostream>
using namespace std;

int main(){
	int a,b;
	bool f1,f2=true;
	
	while(1){
		f1=false;
		cin>>a>>b;
		if(a==0&&b==0)break;
		f2?f2=false:cout<<endl;
		for(int i=a;i<=b;i++){
			if(i%4==0){
				if(i%100==0){
					if(i%400==0){
						cout<<i<<endl;
						f1=true;
					}
				}
				else
				{
					cout << i << endl;
					f1=true;
				}
			}
		}
		f1?f1:cout <<"NA" << endl;
	}
	return 0;
}