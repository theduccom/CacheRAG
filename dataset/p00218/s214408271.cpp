/*100 点の科目がある 	A
数学と英語の平均点が 90 点以上 	A
3 科目の平均点が 80 点以上 	A
3 科目の平均点が 70 点以上 	B
3 科目の平均点が 50 点以上で数学か英語が 80 点以上 	B
上の条件を満たさない 	C*/
#include<iostream>
using namespace std;
int main(){
	for(;;){
		int n;
		cin>>n;
		if(n==0)break;
		for(int i=0;i<n;i++){
			int a,b,c;
			cin>>a;
			cin>>b>>c;
			if(a==100||b==100||c==100){
				cout<<"A"<<endl;
			}	
			else if((a+b)/2>=90){
				cout<<"A"<<endl;
			}
			else if((a+b+c)/3>=80){
				cout<<"A"<<endl;
			}
			else if((a+b+c)/3>=70){
				cout<<"B"<<endl;
			}
			else if((a+b+c)/3>=50&&a>=80){
				cout<<"B"<<endl;
			}	
			else if((a+b+c)/3>=50&&b>=80){
				cout<<"B"<<endl;
			}
			else{
				cout<<"C"<<endl;
			}
		}
	}
}					

