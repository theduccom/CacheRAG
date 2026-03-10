#include <iostream>
using namespace std;

int main(){
	int i,f;
	for(i=1;i<10;i++){
		for(f=1;f<10;f++){
			cout<<i<<"x"<<f<<"="<<i*f;
			cout<<endl;
		}
	}
	return 0;
}