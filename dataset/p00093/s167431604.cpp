#include <iostream>
using namespace std;

int main(){
	int a,b;
	int line =0;
	while(++line){
		cin >> a >> b;
		if(a==0 && b==0) break;
		int count=0;
		if(line > 1) cout << "\n";
		for(int i=a; i <= b; i++){
			if((i % 4==0 && i % 100 !=0) || i % 400 ==0){
				cout << i << "\n";
				count++;
			} 
		}
		if(count ==0) cout << "NA\n";
	}

	return 0;
}