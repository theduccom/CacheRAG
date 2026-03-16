#include <iostream>
#include <cstring>
using namespace std;

int main(){
	string str;
	int l1, l2, l3;
	int p;
	int t, h;
	
	t = 0; h = 0;
	while(getline(cin, str)){
		l1 = 0; l2 = 0; l3 = 0; p = 0;
		while(p < str.size() && str[p] != ','){
			l1 = l1 * 10 + (str[p] - 48);
			p++;
		}
		p++;
		while(p < str.size() && str[p] != ','){
			l2 = l2 * 10 + (str[p] - 48);
			p++;
		}
		p++;
		while(p < str.size() && str[p] != ','){
			l3 = l3 * 10 + (str[p] - 48);
			p++;
		}
		
		if(l1 * l1 + l2 * l2 == l3 * l3) t++;
		if(l1 == l2) h++;
	}
	
	cout << t << endl << h << endl;
	
	return 0;
}