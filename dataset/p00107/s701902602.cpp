#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int x[3];
	int num,hole;
	while(cin >> x[0] >> x[1] >> x[2]){
		if(x[0]+x[1]+x[2] == 0) break;
		sort(x,x+3);
//		cout << x[0];

		cin >> num;
		for(int i=0;i<num;i++){
			cin >> hole;
			if((4 * hole* hole) > (x[0] * x[0] + x[1] * x[1])){
				cout << "OK" << endl;
			}
			else{
				cout << "NA" << endl;
			}
		}
	}
}