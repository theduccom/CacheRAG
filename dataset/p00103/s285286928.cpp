#include <iostream>
using namespace std;

int main() {
	int n, out=0, hit=0, point=0;
	string str;
	cin >> n;
	while(cin >> str){
		if(str=="HIT"){
			hit++;
			if(hit==4){
				point++;
				hit = 3;
			}
		}
		if(str=="HOMERUN"){
			point += hit+1;
			hit = 0;
		}
		if(str=="OUT"){
			out++;
			if(out==3){
				cout << point << endl;
				out = 0;
				point = 0;
				hit = 0;
			}
		}
	}
	
	return 0;
}
