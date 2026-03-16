#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	
	while(cin >> N && N){
	int p=0,d1=0,d2=0,mp=0,md1=0,md2=0;
	for(int i=0;i<N;i++){
		cin >> p >> d1 >> d2;
		if(d1+d2>md1+md2){
			mp=p;
			md1=d1;
			md2=d2;
		}
	}
		
		cout << mp << " " << md1+md2 << endl;
	}
	return 0;
}