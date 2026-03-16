#include <iostream>
using namespace std;

int main() {
	int n;
	while(1){
		cin >> n;
		if(n==0) break;
		int pm[1000], pe[1000], pj[1000];
		for(int i=0; i<n; i++){
			cin >> pm[i] >> pe[i] >> pj[i];
			if(pm[i]==100 || pe[i]==100 || pj[i]==100 || pm[i]+pe[i]>=180 || pm[i]+pe[i]+pj[i]>=240){
				cout << "A" << endl;
			}
			else if(pm[i]+pe[i]+pj[i]>=210){
				cout << "B" << endl;
			}
			else if(pm[i]+pe[i]+pj[i]>=150 && pm[i]>=80 || pe[i]>=80){
				cout << "B" << endl;
			}
			else cout << "C" << endl;
			
		}
	}
	return 0;
}
