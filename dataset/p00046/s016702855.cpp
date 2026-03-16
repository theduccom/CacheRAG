#include <iostream> //üoÍ

using namespace std;

int main(){
	double n;
	cin >> n;
	double max = n;
	double min = n;
	
	while(cin >> n){
		if(n >= max ){
			max = n;
		}else if(n < min){
			min = n;
		}
	}
	
	cout << max - min << endl;
		
	return 0;
	
}