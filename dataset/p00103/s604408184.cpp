#include <iostream>
#include <string>

using namespace std;

int main() {
	// your code goes here
	int n;
	string E;
	cin >>n;
		int runner=0;
		int pts=0;
		int out=0;
	while(n){

		cin >>E;
		if(E=="HOMERUN"){
			pts+=runner+1;
			runner=0;
		}else if(E=="HIT"){
			if(runner==3){pts++;}else{
				runner++;
			}
		}else if(E=="OUT"){
			out++;
			if(out==3){
				cout << pts <<endl;
				pts=0;
				runner=0;
				out=0;
				n--;
			}
		}
		
	}
	return 0;
}