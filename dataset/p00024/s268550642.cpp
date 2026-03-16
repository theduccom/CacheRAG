#include <iostream>
#include <string>
using namespace std;
int main(){
    double x;
	while(cin>>x){
	int i=1;
	while(true){
		if(i>1+x*x/98)
			break;
		i++;
	}
	cout<<i<<endl;
	}
	return 0;
}