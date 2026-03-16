#include<iostream>
using namespace std;
int main(){
	double v0,t;
	while(cin>>v0){
		int n=0;
		t=0;
		t=v0/9.8;
		while(5*n-5<=4.9*t*t){
			n++;
		}
		cout<<n<<endl;
	}
}