#include <iostream>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		bool fla=false;
		for(int i=0;i<10;i++){
			if(n&(1<<i)){
				if(fla){
					cout<<" ";
				}
				else fla=true;
				cout<<(1<<i);
			}
		}
		cout<<endl;
	}
	return 0;
}