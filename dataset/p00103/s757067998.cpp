#include <iostream>
#include <string.h>

using namespace std;

int main(){
	string batter;
	int n;

	cin >> n; 

	for(int i = 0; i < n; i++){
		int runner = 0 , num = 0 , out = 0;	
		while(1){
			cin >> batter;

			if(batter == "HIT"){
				runner++;
				if(runner == 4){
					runner--;
					num++;
				}
			}else if(batter == "HOMERUN"){
				num++;
				num += runner;
				runner = 0;
			}else if(batter == "OUT"){
					out++;
					if(out == 3){
						runner = 0;
						break;
					}
				}
			}
		cout << num << endl;
	}
	return 0;
}