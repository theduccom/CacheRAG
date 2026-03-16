#include<iostream>
#include<string>
using namespace std;
int main()
{
	int sum = 0;
	int out = 0;
	string s;
	int r=0;
	int n;
	cin >> n;
	while (n){
		cin >> s;
		if (s == "HIT"){
			if (r + 1 == 4){
				sum++;
			}
			else{
				r++;
			}
		}
		if (s == "HOMERUN"){
			sum += r+1;
			r = 0;
		}
		if (s == "OUT"){
			if (out + 1 == 3){
				n--;
				cout << sum << endl;
				sum = 0;
				r = 0;
				out = 0;
			}
			else{
				out++;
			}
		}
	}
}