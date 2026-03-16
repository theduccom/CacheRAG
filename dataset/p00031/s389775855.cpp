#include <iostream>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		bool f=false;
		for(int i=0; i<10; i++){
			if((n & 1<<i)!=0){
				if(f) cout << " ";
				cout << (1<<i);
				f = true;
			}
		}
		cout << endl;
	}
	return 0;
}