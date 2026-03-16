#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int n, pm, pe, pj;
	while(1){
		cin>>n;
		if(n==0) break;

		for(int i=0;i<n;i++){
			cin>>pm>>pe>>pj;
			double ave = (pm + pe + pj)/3;
			if(( pm == 100 | pe == 100 | pj == 100 ) | ((pm+pe)/2 >= 90 ) | ( ave >= 80) )  cout<<"A"<<endl;
			else if(( ave >= 70 ) | (( ave >= 50 ) && ( pm >= 80 | pe >= 80 )))             cout<<"B"<<endl;
			else                                                                            cout<<"C"<<endl;
		}
	}

	return 0;
}