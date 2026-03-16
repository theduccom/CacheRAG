#include <iostream>
#include <string>

using namespace std;

int vle[512] = {0};

int main(){
	
	vle['I'] = 1;
	vle['V'] = 5;
	vle['X'] = 10;
	vle['L'] = 50;
	vle['C'] = 100;
	vle['D'] = 500;
	vle['M'] = 1000;

	string str;
	while(cin >> str, !cin.eof()){
		
		int sum = 0, tmp = 0, befv = 0;
		char befc = 0;
		
		for(int i=0; i<str.size(); ++i){
			
			char nowc = str[i];
			int nowv = vle[nowc];

			if(nowv < befv){
				befc = nowc;
				sum += tmp;
				tmp = befv = nowv;
			}
			else if(nowv == befv){
				tmp += befv;
			}
			else{
				befc = nowc;
				sum -= tmp;
				tmp = befv = nowv;
			}
		}
		
		sum += tmp;
		cout << sum << endl;

	}

	return 0;
}
		