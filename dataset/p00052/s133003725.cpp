#include <iostream>
using namespace std;

int main(void){
	int n;
	while(cin >> n){
		if(!n) break;
		int two=0,five=0;
		for(int i=2;i<=n;i++){
			int j = i;
			while(j%2==0||j%5==0){
				if(j%2==0){
					two++;
					j/=2;
				}
				if(j%5==0){
					five++;
					j/=5;
				}
			}
		}
		int count = min(two,five);
		cout << count << "\n";
	}
	return 0;
}