#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	int n, o, h, t;
	string s;
	cin >> n;
	
	while(n--){
		o = h = t = 0;
		while(o < 3){
			cin >> s;
			if(s == "HIT"){
				if(h == 3){
					t++;
				} else {
					h++;
				}
			} else if(s == "HOMERUN"){
				t = t + h + 1;
				h = 0;
			} else {
				o++;
			}
		}
		cout << t << endl;
	}
	
	return 0;
}