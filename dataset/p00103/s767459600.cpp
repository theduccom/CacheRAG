#include <iostream>
#include <string>
using namespace std;

int main(){
	int n, point, runner, out;
	string input;
	cin >> n;
	for(int i = 0; i < n; i++){
		point = 0;
		runner = 0;
		out = 0;
		while(true){
			cin >> input;
			if(input=="HIT"){
				runner++;
				if(runner>3){
					point++;
					runner = 3;
				}
			}
			else if(input=="HOMERUN"){
				point = point + runner + 1;
				runner = 0;
			}
			else{
				out++;
				if(out==3){
					break;
				}
			}
		}
		cout << point << endl;
	}
	return 0;
}