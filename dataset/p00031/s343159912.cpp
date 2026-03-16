#include <iostream>
using namespace std;
int main(){
	int n;
	int weight[10] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
	while(cin >> n){
		int t = 0;
		for(int i = 0; i < 10; i++){
			if(n % 2){
				if(t++) cout << " ";
				cout << weight[i];
			}
			n /= 2;
		}
		cout << endl;
	}
	return 0;
}