#include <iostream>
#include <string>
using namespace std;

int main(){
	int n,rui[4],out;
	cin >> n;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < 4;j++) rui[j] = 0;
		out = 0;
		while(out < 3){
			string s;
			cin >> s;
			if(s == "HIT"){
				rui[3] += rui[2];
				rui[2] = rui[1];
				rui[1] = rui[0];
				rui[0] = 1;
			}
			else if(s == "OUT") out++;
			else if(s == "HOMERUN"){
				rui[3] += rui[2] + rui[1] + rui[0] + 1;
				rui[2] = 0;
				rui[1] = 0;
				rui[0] = 0;
			}
		}
		cout << rui[3] << endl;
	}
	return 0;
}