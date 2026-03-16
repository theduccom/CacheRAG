#include<iostream>
using namespace std;
double u;
int main(){
	while(cin>>u){
		double kaisu=u/9.8*u/9.8*4.9/5+2;
		cout<<(int)kaisu<<endl;
	}
	return 0;
}
