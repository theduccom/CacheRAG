#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
	int n, max, min, kkk;
	cin >> n;
	for(int i=0;i<n;i++){
		string input ="", mmm, mai="",mii="";
		int a[8] = {};
		cin >> input;
		for(int j = 0;j<8;j++){
			mmm = input[j];
			a[j] = stoi(mmm);
		}
		sort(a, end(a));
		kkk = 0;
		for (int j = 0; j<8; j++) {
			if(a[7]==0){
				mai = "0";
				mii = "0";
				break;
			}
			mai += to_string(a[7 - j]);
			if (a[j] == 0 && kkk == 0) {}
			else{
				mii += to_string(a[j]);
				kkk++;
			}
		}
		max = stoi(mai);
		min = stoi(mii);
		cout << max - min << endl;
	}
	return 0;
}