#include <iostream>
#include <string>
using namespace std;

int main()
{
	int cnt[4] = {};
	int n;
	string s;
	while(cin >> n){
		cin.ignore();
		cin >> s;
		if(s == "A")cnt[0]++;
		if(s == "B")cnt[1]++;
		if(s == "AB")cnt[2]++;
		if(s == "O")cnt[3]++;
	}
	for(int i = 0; i < 4; ++i){
		cout << cnt[i] << endl;
	}
}