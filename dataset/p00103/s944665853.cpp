#include <iostream>
#include <string>
using namespace std;

int main(){
	string t1("HIT"), t2("OUT"), t3("HOMERUN");
	int n;
	cin >> n;
	string s;
	for(int i = 0; i < n; i++){
		int out = 0;
		int count = 0;
		int point = 0;
		while(out != 3){
			cin >> s;
			if(s == t2){
				out++;
			}else if(s == t3){
				point += count + 1;
				count = 0;
			}else if(s == t1){
				if(count == 3) point++;
				else count++;
			}
		}
		cout << point << endl;
	}
	return 0;
}