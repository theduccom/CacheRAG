#include<iostream>
using namespace std;

int main(){
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			int a=(i+1)*(j+1);
				cout<<i+1<<"x"<<j+1<<"="<<a<<endl;
		}
	}
	return 0;
}