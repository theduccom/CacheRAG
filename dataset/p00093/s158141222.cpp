#include <iostream>
using namespace std;

bool uru(int y){
    return (y%4==0 && (y%100!=0 || y%400==0) )? true : false ;
}

int main(){
	int a,b;
	bool flag, iniFlag=false;
	
	while(1){
		cin >> a >> b;
		if(a==0 && b==0) break;
		if(iniFlag)cout << endl;
		iniFlag = true;
		flag = true;

		for(int i=a ; i<=b ; i++){
			if( uru(i) ){
				flag = false;
				cout << i << endl;
			}
		}
		if( flag ) cout << "NA" << endl;
		
	}
}