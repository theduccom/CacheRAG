#include <iostream>

using namespace std;

double high,low,m;
int main() {
	cin >> m;
	high = low = m;
	while(cin >> m){
		if(m>high){
			high = m;
		}else if(m<low){
			low = m;
		}
	}
	cout << high-low << endl; 
	return 0;
}