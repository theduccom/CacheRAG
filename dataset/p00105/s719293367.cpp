#include <iostream>
#include <string>
using namespace std;
struct dic{
	string str;
	int n;
};

int main(){
	string a,stmp;
	int b,d = 0,i,j,itmp;
	dic c[101];
	while(cin >> a >> b){
		c[d].str = a;
		c[d].n = b;
		++d;
	}
	for(i = 0;i < d;i++){
		for(j = d - 1;j > i;j--){
			if(c[i].str > c[j].str){
				stmp = c[j].str;
				c[j].str = c[i].str;
				c[i].str = stmp;
				itmp = c[j].n;
				c[j].n = c[i].n;
				c[i].n = itmp;
			}
			else if(c[i].str == c[j].str){
				if(c[i].n > c[j].n){
					itmp = c[j].n;
					c[j].n = c[i].n;
					c[i].n = itmp;
				}
			}
		}
	}
	for(i = 0;i < d;i++){
		cout << c[i].str << endl;
		cout << c[i].n;
		while(c[i].str == c[i+1].str){
			++i;
			cout << " " << c[i].n;
		}
		cout << "\n";
	}
	return 0;
}