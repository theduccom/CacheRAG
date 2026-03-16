#include<iostream>
#include<string>
using namespace std;
int main(){
	int a,b,count;
	bool f=false;
	while(true){
	    cin>>a>>b;
		count=0;
		if(a==0&&b==0)
			break;
		if(f==true)
		    cout<<endl;
		f=true;
		bool h=false;
		for(int i=a;i<=b;i++){
			bool t=false;
			if(i%4==0)
				t=true;
			if(i%100==0)
				t=false;
			if(i%400==0)
				t=true;
			if(t==true){
				cout<<i<<endl;
				h=true;
			}
		}
		if(h==false)
			cout<<"NA"<<endl;
	}
    return 0;
}
 