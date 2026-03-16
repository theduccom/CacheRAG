#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,h,c;
	while(cin>>n){
		h=1;
		c=0;
	for(int i=0;i<10;i++){
		if(n%(h*2)!=0){
			n-=h;
			if(c==0)
			    cout<<h;
			else
				cout<<" "<<h;
			c=1;
		}
		h*=2;
	}
	cout<<endl;
	}
	return 0;
}