#include<iostream>
using namespace std;
int main(){
	int a,i,j;
	for(i=1;i<10;i++){
		for(j=1;j<10;j++){
			a=i*j;
			cout<<i<<"x"<<j<<"="<<a<<endl;
		}
	}
    return 0;
}