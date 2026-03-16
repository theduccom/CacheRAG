#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int l[10], v1, v2;
	string str;
	int p;
	int sum, part;
	double time1, dist2;
	
	while(getline(cin, str)){
		for(int i = 0; i < 10; i++) l[i] = 0;
		v1 = 0; v2 = 0;
		
		p = 0;
		for(int i = 0; i < 10; i++){
			while(str[p] != ','){
				l[i] = l[i] * 10 + (str[p] - 48);
				p++;
			}
			p++;
		}
		while(str[p] != ','){
			v1 = v1 * 10 + (str[p] - 48);
			p++;
		}
		p++;
		while(p < str.size()){
			v2 = v2 * 10 + (str[p] - 48);
			p++;
		}
		
		sum = 0;
		for(int i = 0; i < 10; i++) sum += l[i];
		
		part = 0;
		for(int i = 0; i < 10; i++){
			part += l[i];
			
			time1 = (double)part / v1;
			dist2 = time1 * v2;
			
			if(part + dist2 >= sum){
				cout << i + 1 << endl;
				break;
			}
		}
	}
	
	return 0;
}