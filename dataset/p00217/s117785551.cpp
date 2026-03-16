#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int maxP=-1, maxD=-1;
	int p, d1, d2;
	int num;
	while(cin >> num, num){
		maxD = 0;
		for(int i=0; i< num; i++){
			cin >> p >> d1 >> d2;
			maxD = max(maxD, d1 + d2);
			if(maxD == d1+d2) maxP = p;
		}
		cout << maxP << " " << maxD << endl;
	}
}