#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n, runner, out, score;
	string s;
	cin>>n;
	runner = 0;
	out = 0;
	score = 0;
	while (cin>>s) {
		if (s=="HIT") runner++;
		if (s=="OUT") out++;
		if (s=="HOMERUN") {
			score += runner+1;
			runner = 0;
		}
		if (out==3) {
			if (runner >= 4) score += runner-3;
			cout<<score<<endl;
			runner = 0;
			out = 0;
			score = 0;
		}
	}

	return 0;
}