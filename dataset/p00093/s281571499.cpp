#include <iostream>
using namespace std;

bool isLeap(int y){
	if(y % 4 == 0){
		if(y % 100 == 0){
			if(y % 400 == 0) return true;
			return false;
		}
		return true;
	}
	return false;
}

int main(void){
	int a,b;
	bool first = true;

	while(cin>>a>>b && (a||b)){
		if(first) first = false;
		else cout<<endl;

		int count = 0;

		for(int i=a;i<=b;i++){
			if(isLeap(i)){
				cout<<i<<endl;
				count++;
			}
		}

		if(count == 0){
			cout<<"NA\n";
		}
	}

	return 0;
}