#include<iostream>
using namespace std;
int main(){
	double vec;
	int kekka;
	while(cin>>vec){
		vec/=9.8;
		vec=vec*vec*4.9;
		kekka=vec/5+2;
		cout<<kekka<<endl;
	}
	return 0;
}