#include <iostream>
using namespace std;

int main(){
    while(1){
	int n;
	int max = 0, num = 0;
	cin >> n;
	if (n == 0) break;
	for (int i = 0; i < n; i++){
	    int p, d1, d2, d;
	    cin >> p >> d1 >> d2;
	    d = d1 + d2;
	    if (d > max){
		max = d;
		num = p;
	    }
	}
	cout << num << " " << max << endl;
    }
}