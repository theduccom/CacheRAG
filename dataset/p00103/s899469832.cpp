#include <iostream>
#include <string>
using namespace std;
int main(void){
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		int out=0,base=0,point=0;
		while(out<3){
			string event;
			cin >> event;
			if(event == "OUT"){
				out++;
			}else if(event == "HIT"){
				if(base == 3){
					point++;
				}else{
					base++;
				}
			}else{
				point += base + 1;
				base = 0;
			}
		}
		cout << point << endl;
	}
	return 0;
}