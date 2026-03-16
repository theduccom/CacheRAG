#include<iostream>
using namespace std;
int main(){
	int a,b;
	bool first = true;
	while(cin >> a >> b){
		bool flag = false;
		if(a==0 && b==0) break;
		if(!first) cout << endl;
		else first = false;
		for(int i=a; i<=b; i++){
			if(i%4==0 && ( i%100!=0 || i%400==0) ){
				cout << i << endl;
				flag = true;
			}
		}
		if(flag == false) cout << "NA" << endl;
	}
	return 0;
}